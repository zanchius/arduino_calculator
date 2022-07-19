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
int n = 0;
int a = 0;

void setup(){
  Serial.begin(9600);
  ld.setDigitLimit(8,NCHIP);
  ld.on(2);
  ld.printDigit(0,NCHIP,0);
}
  
void loop(){
  char operand;
  char customKey = customKeypad.getKey();
    if(customKey == '1' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '2' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '3' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '4' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '5' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '6' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '7' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '8' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '9' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == '0' && (i < 9))
    {
      ld.clear();
      buffern[i] = customKey;
      n = atoi(buffern);
      ld.printDigit(n,NCHIP,0);
      i++;
    }
    if(customKey == 'c')
    {
      ld.clear();
      i = 0;
      int n = 0;
      memset(buffern, 0, sizeof(buffern));
      ld.printDigit(0,NCHIP,0);
    }
    if(customKey == '+')
    {
      a = n;
      i = 0;
      int n = 0;
      memset(buffern, 0, sizeof(buffern));
      operand = 's';
    }
    if(customKey == '-')
    {
      a = n;
      i = 0;
      int n = 0;
      memset(buffern, 0, sizeof(buffern));
      operand = 'm';
    }
    if(customKey == '=')
    {
      if (operand =='s')
      {
        int b = n + a;
        ld.printDigit(b,NCHIP,0);
        n = b;
      }
      if (operand =='m')
      {
        int b = a - n;
        ld.printDigit(b,NCHIP,0);
        n = b;
      }
    }
}

