/* A basic calendar. This project also needs more work. 
However, to record my development I will upload it anyway.
*/
#include <stdio.h>

int main(void)
{
    char *days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    char *months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int total_day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day;

    printf("Which day of the week the new year starts: ");
    scanf("%d", &day);

    for (int x = 0; x < 12; x++)
    {
        printf(" %s\n", months[x]);
        for (int i = 0; i < 7; i++)
        {
            printf(" %s", days[i]);
        }
        printf("\n");
        for (int i = 0; i < 7;i++)
            printf("----");

        printf("\n");
        for (int i = 1; i < day; i++)
            printf("    ");

        for (int i = 1; i - 1 < total_day[x]; i++)
        {
            printf("%4d", i);

            if ((i + day) % 7 == 1)
                printf("\n");
        }
        printf("\n");
        day = day + 3;

        if (day > 7)
            day = day % 7;
    }

    return 0;
}
//Barkev Şarklı
