// A basic database for movies. This code writes and reads the name of the movies along with year, IMDb and the director.
// I got help in search_movie function 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

typedef struct movie {
    char name[MAX_LENGTH];
    int published_year;
    char director[MAX_LENGTH];
    float IMDb;
} movie;

movie enter_movie();
int add_to_file(movie _movie1);
void search_movie();

int main(void)
{
    int choice;

    printf("Enter a movie #1\nSearch for a movie #2\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            add_to_file(enter_movie());
            break;
        
        case 2:
            search_movie();
            break;
            
        default:
            break;
    }

    return 0;
}

movie enter_movie()
{
    movie movie1;

    printf("What is the name of the movie: ");
    scanf("%s", movie1.name);

    do
    {
        printf("When the movie is published: ");
        scanf("%d", &movie1.published_year);
    } 
    while (movie1.published_year > 2025 || movie1.published_year < 1800);
    
    printf("Who was the director of the film: ");
    scanf("%s", movie1.director);
    
    printf("Do you know IMDb rating: ");
    scanf("%f", &movie1.IMDb);

    return movie1;
}

int add_to_file(movie _movie1)
{
    FILE *fh_add;
    fh_add = fopen("movies.txt", "a");

    if (fh_add == NULL)
    {
        printf("Error while writing to the file.\n");
        return 1;
    }

    fprintf(fh_add, "Name: %s, ", _movie1.name);
    fprintf(fh_add, "Year: %d, ", _movie1.published_year);
    fprintf(fh_add, "Director: %s, ", _movie1.director);
    fprintf(fh_add, "IMDb: %f\n", _movie1.IMDb);

    fclose(fh_add);

    return 0;
}

void search_movie()
{
    char name[MAX_LENGTH];
    printf("Enter the name of the movie you want to search for: ");
    scanf("%99s", name);

    char line[MAX_LENGTH + 150]; 
    FILE *fh_read;
    fh_read = fopen("movies.txt", "w+");

    if (fh_read == NULL)
    {
        printf("Error while reading the file.\n");
        return;
    }

    int found = 0;
    while(fgets(line, sizeof(line), fh_read) != NULL)
    {
        if (strstr(line, name) != NULL)
        {
            printf("The movie %s is found.\n", name);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("The movie %s couldn't found.\n", name);

    fclose(fh_read);
}

// Barkev Şarklı
