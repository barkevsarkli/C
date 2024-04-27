#include <stdio.h>

int main(void)
{
    int number1 = 0;
    int number2 = 1;
    
    int range;

    printf("Enter the range: ");
    scanf("%d", &range);

    for (int i = 0; i < range; i++)
    {
        printf("%d ", number1 + number2);
        int number3 = number1 + number2;
        number1 = number2;
        number2 = number3;
    }

    printf("\n");

    return 0;
}