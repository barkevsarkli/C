/*
 Write a program that takes 5 numbers from the user (signed integers) and prints the sum only of the odd ones.
 */

#include <stdio.h>

int main(void)
{
    int number;
    int odd_sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 1)
            odd_sum += number;
    }

    printf("Sum of the odd numbers are: %d\n", odd_sum);

    return 0;
}