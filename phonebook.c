// Basic phonebook for contacts
#include <stdio.h>
#include <string.h>

#define MAX_TEL_LENGTH 16
#define MAX_NAME_LENGTH 32

typedef struct contact 
{
    char name[MAX_NAME_LENGTH];
    char number[MAX_TEL_LENGTH];
} contact;


int add_contact(void);
int search_contact(void);

int main(void)
{
    int choice;

    printf("Add contact #1\nSearch contact #2\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            add_contact();
            break;
        
        case 2:
            search_contact();
            break;

        default:
            break;
    }
    return 0;
}

int add_contact(void)
{
    contact _contact;

    printf("Name: ");
    scanf("%s", _contact.name);

    printf("Number: ");
    scanf("%s", _contact.number);

    FILE *fh_input;
    fh_input = fopen("contacts.txt", "a+");

    if (fh_input == NULL)
    {
        printf("File couldn't found.\n");
        return 1;
    }

    fprintf(fh_input, "%s ", _contact.name);
    fprintf(fh_input, "%s\n", _contact.number);

    fclose(fh_input);

    return 0;
}

int search_contact(void) 
{
    char name[50];
    char line[200];
  
    printf("Enter the name: ");
    scanf("%s", name);
  
    FILE *fh_read;
    fh_read = fopen("contacts.txt", "r");

    if (fh_read == NULL) 
    {
        printf("Error while reading the file.\n");
        return 1;
    }

    int found = 0;
    contact _contact;
  
    while (fgets(line, sizeof(line), fh_read) != NULL) 
    {
        char *token = strtok(line, " ");
      
        if (token != NULL) 
        {
            strcpy(_contact.name, token);
          
            if (strcmp(_contact.name, name) == 0) 
            {
                token = strtok(NULL, " ");
                if (token != NULL) 
                {
                    strcpy(_contact.number, token);
                    printf("The number is: %s\n", _contact.number);
                    found = 1;
                    break;
                }
            }
        }
    }

    if (!found)
        printf("The number couldn't be found.\n");

    fclose(fh_read);
    return 0; 
}

//Barkev Şarklı
