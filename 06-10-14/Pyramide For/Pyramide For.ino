#include <Arduino.h>
int x;
int Boucle = 0;

void setup()
{
	Serial.begin(9600);
    x = 8;
}

void loop()
{
    if ( Boucle < 1)
    {
        Boucle = 1;

        for(int i=0; i < x; i++)
        {
            for (int a = 0; a < x-i; a++)
            {
                Serial.print("0");
            }
            for (int a = x - i; a <= x+i; a++)
            {
                Serial.print(i+1);
            }
            for (int a = x +i +1; a < x*2; a++)
            {
                Serial.print("0");
            }
            Serial.println("0");

        }
    }
}
