/*
Write a program to receive two numbers from the user (signed int). 
Then, print the closest number to 100 between the numbers entered by the user. 
If the two numbers have the same value or the same distance to 100, print a message “equal distance
*/

#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    int distance1 = number1 - 100;
    int distance2 = number2 - 100;

    if (distance1 < 0)
        distance1 *= -1;
    
    if (distance2 < 0)
        distance2 *= -1;

    if (distance1 > distance2) 
        printf("Number 2 is closer than number 1.\n");

    else if (distance2 > distance1)
        printf("Number 1 is closer than number 2.\n");

    else 
        printf("They are in the same distance.\n");
    return 0;
}