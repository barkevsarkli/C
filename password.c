/* A basic program to check your password from passwords.txt 
if the user enters the wrong password then it records that into a file called suspicious_attempt */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char temp_array[32];

    printf("Please enter your password: ");
    scanf("%s", temp_array);

    FILE *fh_input;
    fh_input = fopen("passwords.txt", "r");

    if (fh_input == NULL)
    {
        printf("Error!\n");
        return 1;
    }

    char buffer[32];
    fscanf(fh_input, "%s", buffer);

    if (strcmp(temp_array, buffer) != 0)
    {
        printf("The password is incorrect\n");
        
        FILE *fh_wrong;
        fh_wrong = fopen("suspicious_attempts.txt", "a");

        fprintf(fh_wrong, "%s\n", temp_array);

        fclose(fh_wrong);
    }
    
    else 
        printf("The password is correct\n");

    fclose(fh_input);

    return 0;
}

//Barkev Şarklı