#include <Arduino.h>

int Boucle = 0;

void setup()
{
	Serial.begin(9600);

}

void loop()
{
    if ( Boucle < 3) {
        for(int i = 0; i < 9; i++) {
            if (i < 3 or i > 5) {
                Serial.print('-');
            } else {
                Serial.print("_");
            }
            if (i == 8) {
                Serial.println();
            }
            delay(150);
        }
    }
    Boucle++;
    delay(1500);
}
