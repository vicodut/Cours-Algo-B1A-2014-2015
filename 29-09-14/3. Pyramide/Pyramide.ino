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
            for (int a = 0; a < x*2; a++)
            {
                if (a < (x-i) or a > (x+i))
                {
                    Serial.print("0");
                } else
                {
                    Serial.print(i+1);

                }
            }
            Serial.println("0");

        }
    }
}
