/*
  music-library.h - Library for simple melodies
  Created by Benjamen Lim, 2017
  Released into the public domain
*/


#ifndef MusicLibrary_h
#define MusicLibrary_h

#include "Arduino.h"

class MusicLibrary
{
public:
  MusicLibrary(int pin);
  void starwars();
  void success();
  void failure();
private:
  int _pin;
  void beep(int note,int duration);
};

#endif
