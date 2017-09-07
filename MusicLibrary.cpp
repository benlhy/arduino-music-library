/*
  music-library.cpp - Library for simple melodies
  Created by Benjamen Lim, 2017
  Released into the public domain
*/

#include "Arduino.h"
#include "MusicLibrary.h"

const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(_pin, note, duration);

  //Play different LED depending on value of 'counter'
  delay(50);
  //Stop tone on buzzerPin
  noTone(_pin);

  delay(50);

}


MusicLibrary::MusicLibrary(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void MusicLibrary::starwars()
{
  beep(a, 500);
  beep(a, 500);
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);

  beep(eH, 500);
  beep(eH, 500);
  beep(eH, 500);
  beep(fH, 350);
  beep(cH, 150);
  beep(gS, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);
}

void MusicLibrary::success()
{
  beep(c,100);
  beep(cH,350);
  beep(eH,100);
}

void MusicLibrary::failure()
{
  beep(eH,100);
  beep(c,300);
}
