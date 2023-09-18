#include <Keyboard.h>
void setup() {
Keyboard.begin();
delay(1000);

Keyboard.press(KEY_LEFT_GUI); Keyboard.press('d');
Keyboard.releaseAll();
delay(200);

Keyboard.press(KEY_LEFT_GUI);
delay(10);
Keyboard.releaseAll();

delay(200);
Keyboard.print("default apps"); delay(250);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(1000);

Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
delay(100);

Keyboard.print("chrome"); delay(500);
Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
Keyboard.press(KEY_RETURN); Keyboard.release(KEY_RETURN); delay(300);
Keyboard.press(KEY_RETURN); Keyboard.release(KEY_RETURN); delay(100);


delay(200);
Keyboard.end();
}
void loop() {}