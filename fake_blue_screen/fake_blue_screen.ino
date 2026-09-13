#include <Keyboard.h>
void setup() {
  delay(1000);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(200);
  Keyboard.releaseAll();
  delay(600);
  Keyboard.print("cmd /c start https://www.ravbug.com/bsod/bsod10/");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(1500);
  Keyboard.press(KEY_F11);
  delay(100);
  Keyboard.release(KEY_F11);
  Keyboard.end();
}
void loop() {
}
