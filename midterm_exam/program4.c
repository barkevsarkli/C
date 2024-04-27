/*
Write a program to receive a numerical value for an exam grade from the user (a positive integer). The grade should be in the range [0, 100]. 
Then, transform it into its corresponding letter grade in the range [AA, F] based on the following rules:
• grade ∈ [90, 100] à AA
• grade ∈ [80, 89] à BA
• grade ∈ [70, 79] à BB
• grade ∈ [60, 69] à CB
• grade ∈ [50, 59] à CC
• grade ∈ [40, 49] à DC
• grade ∈ [30, 39] à DD
• grade∈[0,29]àF
Print out the letter grade.
Any value outside the range [0, 100] should not make the conversion but write a message “Invalid input.”
*/

#include <stdio.h>

int main(void)
{   
    int grade;

    printf("grade = ");
    scanf("%d", &grade);

    if (grade <= 100 && grade >= 90)
        printf("AA\n");
    
    else if (grade <=89 && grade >= 80)
        printf("BA\n");

    else if (grade <=79 && grade >= 70)
        printf("BB\n");

    else if (grade <=69 && grade >= 60)
        printf("CB\n");
    
    else if (grade <=59 && grade >= 50)
        printf("CC\n");
    
    else if (grade <=49 && grade >= 40)
        printf("DC\n");

    else if (grade <=39 && grade >= 30)
        printf("DD\n");
    
    else if (grade <= 29 && grade >= 0)
        printf("FF\n");
        
    return 0;
}