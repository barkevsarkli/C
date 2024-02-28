/* Basic calculator for converting base10 numbers into binary, octal and hexadecimal numbers
Designed to mitigate the work during my lab section which is on 01.03.2024 */

#include <stdio.h> 

void calculate_binary(int num);
void calculate_octal(int num);
void calculate_hexadecimal(int num);

int main(void)
{
    int number;

    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &number);
    } 
    while (number < 0);
    
    calculate_binary(number);
    calculate_octal(number);
    calculate_hexadecimal(number);

    printf("\n");
    return 0;
}

void calculate_binary(int num)
{
    int i = 0;
    int b_array[32];
    while (num != 0)
    {
        if (num % 2 == 1)
        {
            b_array[i] = 1;
        }

        else
        {
            b_array[i] = 0;
        }

        num = num / 2;
        i++;
    }
        
    printf("\nBinary: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", b_array[j]);
    }
    printf("\n");
}


void calculate_octal(int num)
{
    int i = 0;
    int o_array[16];

    while (num != 0)
    {
        o_array[i] = num % 8;
        num = num / 8;
        i++;
    }
        
    printf("Octal: ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", o_array[j]);
    }
    printf("\n");
} 

void calculate_hexadecimal(int num)
{
    int i = 0;
    int hexa_array[16];

    while (num != 0)
    {
        hexa_array[i] = num % 16;
        num = num / 16;
        i++;
    }

    printf("Hexadecimal: ");

    for (int j = i - 1; j >= 0; j--)
    {
        if (hexa_array[j] < 16 && hexa_array[j] > 9)
        {
            switch (hexa_array[j])
            {
                case 10:
                    printf("A");
                    break;
                
                case 11:
                    printf("B");
                    break;

                case 12:
                    printf("C");
                    break;

                case 13:
                    printf("D");
                    break;
                case 14:
                    printf("E");
                    break;
                
                case 15:
                    printf("F");
                    break;

                default:
                    break;
            }
        }
        else 
        {
            printf("%d", hexa_array[j]);
        }
    }

    printf("\n");
}

//Barkev Şarklı