/*
Write a program to receive two integer from the user (signed int), named a and b. Then, swap
their values and print it.
*/

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}