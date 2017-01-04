#include <MidiStream.h>
#include "MIDIUSB.h"


int MidiStream::available()
{
	return MidiUSB.available();
}

int MidiStream::peek() 
{
	return 0;
}

void MidiStream::flush()
{
  MidiUSB.flush();
}

int MidiStream::read()
{
  midiEventPacket_t rx = MidiUSB.read();
	return rx.byte2 | (rx.byte3 << 7);
}

size_t MidiStream::write(uint8_t c)
{
	midiEventPacket_t event = {0x09, 0x90, c & 0x7F, (c >> 7) & 0x7F};
  MidiUSB.sendMIDI(event);
	return 1;
}

size_t MidiStream::write(const char *str)
{
	return 0;
}

size_t MidiStream::write(const char *buffer, size_t size)
{
	return 0;
}

size_t MidiStream::write(const uint8_t *buffer, size_t size)
{
  return 0;
}

size_t MidiStream::print(const __FlashStringHelper *ifsh)
{
  return 0;
}

size_t MidiStream::print(const String &s)
{
  return 0;
}

size_t MidiStream::print(const char str[])
{
  return 0;
}

size_t MidiStream::print(char c)
{
  return 0;
}

size_t MidiStream::print(unsigned char b, int base)
{
  return 0;
}

size_t MidiStream::print(int n, int base)
{
  return 0;
}

size_t MidiStream::print(unsigned int n, int base)
{
  return 0;
}

size_t MidiStream::print(long n, int base)
{
  return 0;
}

size_t MidiStream::print(unsigned long n, int base)
{
  return 0;
}

size_t MidiStream::print(double n, int digits)
{
  return 0;
}

size_t MidiStream::println(const __FlashStringHelper *ifsh)
{
  return 0;
}

size_t MidiStream::print(const Printable& x)
{
  return 0;
}

size_t MidiStream::println(void)
{
  return 0;
}

size_t MidiStream::println(const String &s)
{
  return 0;
}

size_t MidiStream::println(const char c[])
{
  return 0;
}

size_t MidiStream::println(char c)
{
  return 0;
}

size_t MidiStream::println(unsigned char b, int base)
{
  return 0;
}

size_t MidiStream::println(int num, int base)
{
  return 0;
}

size_t MidiStream::println(unsigned int num, int base)
{
  return 0;
}

size_t MidiStream::println(long num, int base)
{
  return 0;
}

size_t MidiStream::println(unsigned long num, int base)
{
  return 0;
}

size_t MidiStream::println(double num, int digits)
{
  return 0;
}

size_t MidiStream::println(const Printable& x)
{
  return 0;
}
