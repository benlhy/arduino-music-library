A simple Arduino library for melodies.

### Usage

\#include <MusicLibrary.h>
\#define PIN 8 //pin D8 on Arduino

MusicLibrary ml(PIN);
setup() {
}
loop() {
 ml.starwars();
 delay(500);
 ml.success();
 delay(500);
 ml.failure();
 delay(500);
}
