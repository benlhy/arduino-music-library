A simple Arduino library for melodies.

### Usage

\#include <MusicLibrary.h>
\#define PIN 8 //pin D8 on Arduino

setup() {
  MusicLibrary ml(PIN);
}
loop() {
 ml.starwars();
 ml.success();
 ml.failure();
}
