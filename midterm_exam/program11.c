/*
Write a program to receive a positive number from the user (unsigned int) and:
• prints all digits of the number, from the less significant to the most significant one
• calculates the sum of all the digits and prints it
*/

#include <stdio.h>

int main(void)
{
    unsigned int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);

    int sum = 0;

    while (number != 0)
    {
        int digit = number % 10;
        number /= 10;
        printf("%d ", digit);
        sum += digit;
    }

    printf("\nThe sum of digits: %d\n", sum);
}