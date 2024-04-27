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
            if (i == 0 || j == 0 ||i == height - 1 || j == height - 1)
                printf("* ");
            
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}