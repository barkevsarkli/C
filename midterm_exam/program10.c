/*
Write a program to receive “n” floating point numbers (float) from the user, and calculate:
• the average of the positive numbers (including 0)
• the average of the negative numbers
The user should also give the number “ n “ (unsigned int).*/

#include <stdio.h>

int main(void)
{
    int positive_sum = 0, negative_sum = 0;
    int positive_count = 0, negative_count = 0;

    int number;
    unsigned int N;

    printf("N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);

        if (number >= 0)
        {
            positive_sum += number;
            positive_count++;
        }

        else
        {
            negative_count++;
            negative_sum += number;
        }
    }

    (positive_count > 0) ? printf("Average of positive: %.2f\n", (float)positive_sum / positive_count) : printf("There are no positive numbers.\n");
    (negative_count > 0) ? printf("Average of negative: %.2f\n", (float)negative_sum / negative_count) : printf("There are no negative numbers.\n");

    return 0;
}