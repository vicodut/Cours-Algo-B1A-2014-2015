#include <Arduino.h>
int x;
int Boucle = 0;

void setup()
{
	Serial.begin(9600);
    x = 3;
}

void loop()
{
    if ( Boucle < 1)
    {
        Boucle = 1;

        int y = x/2;
        for(int i=0; i < x; i++)
        {
            if ( i == y )
            {
                Serial.print('1');
            }
            else
            {
                Serial.print('0');
            }
        }
    }
}
