#include <Arduino.h>

#define GND1 2
#define GND2 3

const int segmenty[] = {4, 5, 6, 7, 8, 9, 10, 11};
const int Velikost = sizeof(segmenty) / sizeof(segmenty[0]);

void pripravSegmenty(const int *);
void rozsvitVsechny(const int *);

void setup()
{
  pinMode(GND1, OUTPUT);
  pinMode(GND2, OUTPUT);
  digitalWrite(GND1, LOW);
  digitalWrite(GND2, LOW);
  pripravSegmenty(segmenty);
}

void loop()
{
  rozsvitVsechny(segmenty);
}

void pripravSegmenty(const int *segmenty)
{
  for (int i = 0; i < Velikost; i++)
  {
    pinMode(segmenty[i], OUTPUT);
  }
}

void rozsvitVsechny(const int *segmenty)
{
  for (int i = 0; i < Velikost; i++)
  {
    digitalWrite(segmenty[i], HIGH);
  }
}