// LED display stuff
#include <SPI.h>
#define PRINT_DIGIT_NEG 1
#include <DigitLed72xx.h>
#define LOAD_PIN 10
#define NCHIP 1
DigitLed72xx ld = DigitLed72xx(LOAD_PIN, NCHIP);

// Keypad stuff
#include <Keypad.h>
const byte ROWS = 6;
const byte COLS = 4;
char hexaKeys[ROWS][COLS] = {
  {'+','.','0','='},
  {'+','9','8','7'},
  {'-','6','5','4'},
  {'*','3','2','1'},
  {'/','l','e','s'},
  {'c','%','d','h'}
};
byte rowPins[ROWS] = {4,5,6,7,8,9};
byte colPins[COLS] = {1,0,2,3};
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

char buffern[8]; //Used to capture the keypad input
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
