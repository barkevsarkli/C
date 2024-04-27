/*
Write a program that takes 3 numbers from the user (signed integers) and prints the greater among them.
*/

#include <stdio.h>

int main(void)
{
    int maximum;
    int number;

    for (int i = 0; i < 3; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);

        if (i == 0)
            maximum = number;
        
        else if (number > maximum)
            maximum = number;
    }

    printf("Maximum number is: %d", maximum);

    return 0;
}