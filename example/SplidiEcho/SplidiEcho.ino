#include "MIDIUSB.h"
#include <MidiStream.h>

MidiStream midiStream;

void setup() {
  Serial.begin(57600);
  Serial.println("hello from midi device");
}

void loop() {
  while(midiStream.available()){
    byte c = midiStream.read();
    Serial.println(c);
    midiStream.write(c);
    midiStream.flush(); //needed?
  }
}