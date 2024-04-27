#include <stdio.h>

int main(void)
{
    int height;

    printf("Height: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (j <= i)
                printf("* ");
            
            else 
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}