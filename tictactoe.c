/* A basic Tic-Tac-Toe game for fun. It is singleplayer, so you play with the computer.
One shortcoming for this code is the computer you play just generates random numbers.
Therefore, you can win with minimal effort.
However, this is just the beginning, I have some other future plans for this game.
Also, I got some help for the computer_move function because I didn't know how to generate random numbers.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void table(void);
void player_move(void);
void initial_board(void);
void computer_move(void);
int check_spaces(void);
void check_winner(void);

char array[3][3];

int main(void) 
{
    initial_board();

    while (check_spaces() > 0)
    {
        player_move();

        check_winner();

        if (check_spaces() == 0) 
        {
            printf("It's a draw!\n");
            break;
        }

        computer_move();

        table();

        check_winner();
    }

    return 0;
}

void initial_board(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            array[i][j] = ' ';
            printf(" %c ", array[i][j]);

            if (j < 2)
                printf("|");
        }

        if (i == 2)
            continue;

        else
        {
            printf("\n");
            for (int j = 0; j < 11; j++)
                printf("-");
        }

        printf("\n");
    }
    printf("\n");
}

void table(void)
{
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            printf(" %c ", array[i][j]);

            if (j < 2)
                printf("|");
        }

        if (i == 2)
            continue;

        else
        {
            printf("\n");
            for (int j = 0; j < 11; j++)
                printf("-");
        }
        printf("\n");
    }
    printf("\n\n");
}

void player_move() 
{
    int x, y;

    do 
    {
        printf("Enter a row (1-3): ");
        scanf("%d", &x);
    } 
    while (x < 1 || x > 3);
    x--; 

    do 
    {
        printf("Enter a column (1-3): ");
        scanf("%d", &y);
    } 
    while (y < 1 || y > 3);
    y--; 

    if (array[x][y] == ' ') 
        array[x][y] = 'X'; 
    
    else 
    {
        printf("Invalid move!\n");
        player_move(); 
    }
}

void computer_move(void)
{
    srand(time(0));
    int x, y;

    do 
    {
        x = rand() % 3;
        y = rand() % 3;
    }
    while (array[x][y] != ' ');

    array[x][y] = 'O';
}

int check_spaces(void)
{
    int empty_spaces = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] == ' ')
                empty_spaces++;
            
        }
    }

    return empty_spaces;
}

void check_winner(void)
{
    for (int i = 0; i < 3; i++)
    {
        if (array[i][0] == array[i][1] && array[i][0] == array[i][2] && array[i][0] != ' ')
        {
            printf("%c wins!\n", array[i][0]);
            exit(0);
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (array[0][j] == array[1][j] && array[0][j] == array[2][j] && array[0][j] != ' ')
        {
            printf("%c wins!\n", array[0][j]);
            exit(0);
        }
    }
    if (array[0][0] == array[1][1] && array[0][0] == array[2][2] && array[0][0] != ' ')
    {
        printf("%c wins!\n", array[0][0]);
        exit(0);
    }
    if (array[0][2] == array[1][1] && array[0][2] == array[2][0] && array[0][2] != ' ')
    {
        printf("%c wins!\n", array[0][2]);
        exit(0);
    }
}
//Barkev Şarklı
