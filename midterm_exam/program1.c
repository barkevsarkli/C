/* Write a program that prints out the sizes (in bytes) of data types for:

• char
• short
• unsigned short
• int
• unsigned int
• long
• unsigned long
• float
• double
You must use the operator sizeof, which will provide you the size in bytes as an unsigned long. 
Therefore, when using printf to print this value, you need to use the specifier %lu. */

#include <stdio.h>

int main(void)
{
    printf("The size of char is %lu byte.\n", sizeof(char));
    printf("The size of short is %lu byte.\n", sizeof(short));
    printf("The size of unsigned short is %lu byte.\n", sizeof(unsigned short));
    printf("The size of int is %lu byte.\n", sizeof(int));
    printf("The size of unsigned int is %lu byte.\n", sizeof(unsigned int));
    printf("The size of long is %lu byte.\n", sizeof(long));
    printf("The size of unsigned long is %lu byte.\n", sizeof(unsigned long));
    printf("The size of float is %lu byte.\n", sizeof(float));
    printf("The size of double is %lu byte.\n", sizeof(double));

    return 0;
}