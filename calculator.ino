/* @file CustomKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates changing the keypad size and key values.
|| #
*/
#include <SPI.h>
#define PRINT_DIGIT_NEG 1
#include <DigitLed72xx.h>

// What pin on the Arduino connects to the LOAD/CS pin on the MAX7219/MAX7221
#define LOAD_PIN 10
#define NCHIP 1

DigitLed72xx ld = DigitLed72xx(LOAD_PIN, NCHIP);

#include <Keypad.h>

const byte ROWS = 6; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'+','.','0','='},
  {'+','9','8','7'},
  {'-','6','5','4'},
  {'*','3','2','1'},
  {'/','l','e','s'},
  {'c','%','d','h'}
};
byte rowPins[ROWS] = {4,5,6,7,8,9}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {1,0,2,3}; //connect to the column pinouts of the keypad
char buffern[8];

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

int nvalue;
int i = 0;

void setup(){
  Serial.begin(9600);
  ld.setDigitLimit(8,NCHIP);
  ld.on(2);
}
  
void loop(){
  char customKey = customKeypad.getKey();
  if (customKey && i < 9){
    if(customKey == '1')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '2')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '3')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '4')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '5')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '6')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '7')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '8')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '9')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }
    if(customKey == '0')
    {
      buffern[i] = customKey;
      int n = atoi(buffern);
      ld.printDigit(n,NCHIP,i);
      i++;
    }

  }
  
}
