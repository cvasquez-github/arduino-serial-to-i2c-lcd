#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
Serial.begin(9600);
lcd.init();
lcd.backlight();
}

const unsigned int MAX_MESSAGE_LENGTH = 22;
static unsigned int message_pos = 0;
static char commandBuffer[MAX_MESSAGE_LENGTH];
const char endOfString = '\0';
const char endOfLine = '\n';

void loop() {

while (Serial.available() > 0)
{
   char inByte = Serial.read();
   if(inByte != endOfLine)
    {
    if (message_pos < MAX_MESSAGE_LENGTH)
      {
      commandBuffer[message_pos] = inByte;
      message_pos++;
      }
     else
      {
      //Discard these bytes
      Serial.println("ERROR TOO MANY CHARACTERS (1)");
      ResetBuffer();
      }
    }
   else //End of command
    {
      if (message_pos < MAX_MESSAGE_LENGTH)
        {
        commandBuffer[message_pos] = '\0';
        ExecuteCommand(commandBuffer);
        ResetBuffer();
        }
        else
        {
        Serial.println("ERROR TOO MANY CHARACTERS (2)");
        ResetBuffer();
        }
    }
}

}

void ResetBuffer()
{
   message_pos = 0;
}

void ExecuteCommand(String command)
{
  if (command.length() > 3)
  {
  Serial.println("Valid command length\0");
  if (command.substring(0, 3)  == "LCD") //LCD MESSAGE
  {
    char lcdCommand = command[3];
    if (command.length() > 4)
    {
    int lcdLine = command[4] - '0';
    lcd.setCursor(0, lcdLine); 
    if (lcdCommand == 'W' && command.length() > 5) //Write
      {
      lcd.print(command.substring(5));
      }
    else if (lcdCommand == 'C') //Clear Line
      {
      lcd.print("                                   ");
      }
    else 
      {
    Serial.println("Unknown LCD Command!\0");     
      }
    }
    else
    {
    if (lcdCommand == 'X') //Clear All Lines
      {
      lcd.clear();
      }
     else
     {
    Serial.println("Unknown LCD short Command!\0");  
     }
    }
  }
  else
  {
    Serial.println("Unknown command!\0");
  }
  }
  else
  {
    Serial.println("Invalid command!\0");
  }
        
}

void serialEvent() 
  {
  }
