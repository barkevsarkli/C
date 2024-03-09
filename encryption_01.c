/* A basic encrytion method that adds a random value to the ascii character of the message
Then, it prints that message into a txt file called encrypted_message 
It is very basic,yet I will develop this project via using this code as a template */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[32];
    char output[32];
    char array[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    printf("Enter the message you want to encrypt: ");
    scanf("%s", input);

    srand(time(NULL));
    
    size_t key = rand() % 25;

    for (size_t i = 0; i < strlen(input); i++)
    {
        size_t int_value = (size_t)input[i]; 
        int_value = int_value + key;
        output[i] = (char)int_value;
    }

    FILE *fh_output;
    fh_output = fopen("encrypted_message.txt", "w");

    if (fh_output == NULL)
    {
        printf("Error!");
        return 1;
    }

    for (size_t i = 0; i < strlen(input); i++)
        fprintf(fh_output,"%c", output[i]);

    fclose(fh_output);

    return 0;
}
// Barkev Şarklı
