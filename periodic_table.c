#include <stdio.h>
#include <string.h>

int main() 
{
    int size = 3;

    char *table[9][18] = {
        {"H",  " ", " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ", " ","He"},  
        {"Li", "Be", " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  "B", "C", "N", "O", "F", "Ne"}, 
        {"Na", "Mg", " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  " ",  "Al", "Si", "P", "S", "Cl", "Ar"}, 
        {"K",  "Ca", "Sc", "Ti", "V",  "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr"}, 
        {"Rb", "Sr", "Y",  "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I",  "Xe"}, 
        {"Cs", "Ba", "*",  "Hf", "Ta", "W",  "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn"}, 
        {"Fr", "Ra", "**", "Rf", "Db", "Sg", "Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Nh", "Fl", "Mc", "Lv", "Ts", "Og"}
    };

    char *extra_table[2][18] = {
        {" ", " ", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", " "},
        {" ", " ", "Ac", "Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No", "Lr", " "}
    };

    printf("\n");

    for (int y = 0; y < 19; y++)
        {
            if (y < 2 || y > 12)
            {
                if (y < 3)
                    printf(" %dA ", y + 1);
                
                else
                    printf(" %dA ", y - 10);
            }
            else
            {
                if (y < 8)
                    printf(" %dB ", y + 1);

                switch (y)
                {
                case 9:
                    printf(" 8B ");
                    break;
                
                case 10:
                    printf(" 8B ");
                    break;
                
                case 11:
                    printf(" 1B ");
                    break;
                
                case 12:
                    printf(" 2B ");
                    break;
                default:
                    break;
                }
            }
        }

    printf("\n");

    for (int a = 0; a < 7; a++)
    {

        for (int x = 0; x < 9; x++)
        {
            printf("--------");
        }
        printf("\n");
        for (int b = 0; b < 18; b++)
        {
            for (int i = 0; i < size; i++) 
            {
                for (int j = 0; j < size; j++) 
                {
                    if (i != 0 && i != size - 1 && j != 0 && j != size - 1) {
                        printf("%-2s", table[a][b]);
                    }
                    else 
                    {
                        if (i == 0 || i % 2 == 0)
                        {
                            printf("");
                        }

                        else 
                        {
                            printf("|");
                        }
                    }
                }
            }
        }
        
        printf("\n");
    }
    for (int x = 0; x < 9; x++)
        {
            printf("--------");
        }
        printf("\n");

    printf("\n");
    for (int a = 0; a < 2; a++)
    {
        for (int x = 0; x < 9; x++)
        {
            printf("--------");
        }
        printf("\n");
        for (int b = 0; b < 18; b++)
        {
            for (int i = 0; i < size; i++) 
            {
                for (int j = 0; j < size; j++) 
                {
                    if (i != 0 && i != size - 1 && j != 0 && j != size - 1) {
                        printf("%-2s", extra_table[a][b]);
                    }
                    else 
                    {
                        if (i == 0 || i % 2 == 0)
                            printf("");

                        else 
                            printf("|");
                    }
                }
            }
        }
        printf("\n");
    }

    for (int x = 0; x < 9; x++)
        printf("--------");
    
    printf("\n\n");
    return 0;
}