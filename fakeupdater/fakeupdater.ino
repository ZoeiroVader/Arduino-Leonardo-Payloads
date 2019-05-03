/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Nurrl/Duckuino/blob/master/LICENSE'
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("iexplore -k http"));
  Keyboard.write(63);
  Keyboard.print(F("\334\334fakeupdate.net\334win10"));
  delay(300);
  typeKey(KEY_RETURN);

  delay(3000);
  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
