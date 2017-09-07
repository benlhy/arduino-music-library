A simple Arduino library for melodies. Download zip file and in Arduino, Sketch > Include Library > Import zip library

### Usage

```
#include <MusicLibrary.h>

#define PIN 8 //pin D8 on Arduino

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
```
