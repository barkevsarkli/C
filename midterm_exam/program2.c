/*
Task 2 – Area and perimeter of a rectangle:
Write a program that asks the user for two integer numbers:
• the height of a rectangle
• the width of a rectangle
Calculate and print the perimeter and the area of a rectangle.
*/

#include <stdio.h>

int main(void)
{
    int height, width;

    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 0);
    
    do
    {
        printf("Width: ");
        scanf("%d", &width);
    }
    while (width < 0);

    printf("Area = height * width = %d * %d = %d\n", height, width, height * width);
    printf("Perimeter = 2 * (height + width) = 2 * (%d + %d) = %d\n", height, width, 2 * (height + width));

    return 0;
}