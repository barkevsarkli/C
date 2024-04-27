/*
Write a program that asks the user to guess the number the computer is thinking of. 
The computer will generate a random number between 1 and 10, and the user must guess: every time the user makes a wrong guess, the computer will indicate whether they have to guess lower or higher.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));

    int number;
    int random_number = rand() % 10 + 1;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &number);

        if (number == random_number)
        {
            printf("You found it.\n");
            break;
        }

        else if (random_number > number)
            printf("Higher\n");
        
        else if (random_number < number)
            printf("Lower\n");  
    } 
    while (1);
    

    return 0;
}