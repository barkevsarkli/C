// Random dice genarator. It prints the dice in 2D and records the resuts in a file called dice_record.txt

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_one(void);
void print_two(void);
void print_three(void);
void print_four(void);
void print_five(void);
void print_six(void);

int main(void)
{
    FILE *fp;
    fp = fopen("dice_record.txt", "a");

    int dice = 2;
    int roll;   

    srand(time(NULL));

    for (int i = 0; i < dice; i++)
    {
        roll = rand() % 6 + 1;

        fprintf(fp,"Dice %d: %d\n", i + 1 , roll);
    
        switch (roll)
        {
        case 1:
            print_one();
            break;
        
        case 2:
            print_two();
            break;

        case 3:
            print_three();
            break;

        case 4:
            print_four();
            break;

        case 5:
            print_five();
            break;

        case 6:
            print_six();
            break;

        default:
            break;
        }
    }
    
    fclose(fp);
    return 1;
}

void print_one(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0 || i == 4)
                printf("-");
            else if (j == 0 || j == 10)
                printf("|");
            else if (i == 2 && j == 5)
                printf("x");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void print_two(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0 || i == 4)
                printf("-");
            else if (j == 0 || j == 10)
                printf("|");
            else if ((i == 1 && j == 3) || (i == 3 && j == 7))
                printf("x");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void print_three(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0 || i == 4)
                printf("-");
            else if (j == 0 || j == 10)
                printf("|");
            else if ((i == 1 && j == 3) || (i == 3 && j == 7) || (i == 2 && j == 5))
                printf("x");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void print_four(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0 || i == 4)
                printf("-");
            else if (j == 0 || j == 10)
                printf("|");
            else if ((i == 1 || i == 3) && (j == 3 || j == 7))
                printf("x");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void print_five(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0 || i == 4)
                printf("-");
            else if (j == 0 || j == 10)
                printf("|");
            else if (((i == 1 || i == 3) && (j == 3 || j == 7)) || (i == 2 && j == 5))
                printf("x");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void print_six(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0 || i == 4)
                printf("-");
            else if (j == 0 || j == 10)
                printf("|");
            else if ((i == 1 || i == 2 || i == 3) && (j == 3 || j == 7))
                printf("x");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// Barkev Şarklı
