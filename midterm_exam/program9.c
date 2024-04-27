/*
Write a program to receive “n” floating point numbers (float) from the user, and calculate their average.
The user should also give the number “ n “ (unsigned int).
*/

#include <stdio.h>

int main(void)
{
    unsigned int N;

    printf("N: ");
    scanf("%d", &N);

    int count = 0;
    int sum = 0;
    int number;

    for (int i = 0; i < N; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &number);

        sum += number;
        count++;
    }

    printf("The average is: %.2f\n", (float)sum / count);

    return 0;
}