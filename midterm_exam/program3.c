/*
Write a program that asks the user for an integer number indicating seconds (i.e., an amount of time defined in seconds). 
The program must convert this value into hours, minutes, and seconds. 
Print the output.
*/

#include <stdio.h>

int main(void)
{
    unsigned int seconds;
    int minutes = 0, hours = 0; 

    printf("Seconds = ");
    scanf("%d", &seconds);

    while (seconds >= 60)
    {
        seconds -= 60;
        minutes++;
    }

    while (minutes >= 60)
    {
        minutes -= 60;
        hours++;
    }

    printf("%d hour(s), %d minutes(s), %d second(s)\n", hours, minutes, seconds);

    return 0;
}