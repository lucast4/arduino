#include <Morse.h>

Morse morse_test(13);

void setup()
{
}

void loop()
{
  morse_test.dot(); 
  morse_test.dash();
  delay(3000);
}

