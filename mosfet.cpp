#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

const int PWM_pin = 26;
const int PWM_pin2 = 23;

int main (void)
{
    int intensity;         

    if (wiringPiSetup() == -1) {
        exit (1);
    }

    pinMode (PWM_pin, PWM_OUTPUT); /* set PWM pin as output */
    pinMode (PWM_pin2, PWM_OUTPUT);

    while (1) {
        for (intensity = 0 ; intensity < 1024 ; ++intensity)
        {
            pwmWrite(PWM_pin, intensity);
            delay(1);
        }
        delay(1);

        for (intensity = 1023 ; intensity >= 0 ; --intensity)
        {
            pwmWrite(PWM_pin, intensity);
            delay(1);
        }
        delay(3);

        for (intensity = 0 ; intensity < 1024 ; ++intensity)
        {
            pwmWrite(PWM_pin2, intensity);
            delay(1);
        }
        delay(1);

        for (intensity = 1023 ; intensity >= 0 ; --intensity)
        {
            pwmWrite(PWM_pin2, intensity);
            delay(1);
        }
        delay(3);
    }
}