#define BLYNK_TEMPLATE_ID "xyx"
#define BLYNK_TEMPLATE_NAME "xyz"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

int pin0 = 16;
int pin1 = 5;
int pin2 = 4;
int pin3 = 10;

void setup()
{
  Serial.begin(115200);
  delay(100);

  pinMode(pin0, OUTPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
 
  digitalWrite(pin0, HIGH);
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);

  BlynkEdgent.begin();
}

BLYNK_WRITE(V0)
{
    int value = param.asInt();
    if(value == 1)
      digitalWrite(pin0, LOW);
    else
      digitalWrite(pin0, HIGH);
}

BLYNK_WRITE(V1)
{
    int value = param.asInt();
    if(value == 1)
      digitalWrite(pin1, LOW);
    else
      digitalWrite(pin1, HIGH);
}

BLYNK_WRITE(V2)
{
    int value = param.asInt();
    if(value == 1)
      digitalWrite(pin2, LOW);
    else
      digitalWrite(pin2, HIGH);
}

BLYNK_WRITE(V3)
{
    int value = param.asInt();
    if(value == 1)
      digitalWrite(pin3, LOW);
    else
      digitalWrite(pin3, HIGH);
}

void loop() {
  BlynkEdgent.run();
 
}
