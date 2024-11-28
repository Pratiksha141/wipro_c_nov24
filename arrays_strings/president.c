// Store first name and last name of the last 5 presidents of Bhaarat
#include <stdio.h>

int main()
{
    char president_names[5][2][32] = {{""}};
    puts("Enter First and Second names of last 5 presidents of Bhaarat");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &president_names[i][0]);
        scanf("%s", &president_names[i][1]);
    }
    printf("%-12s %-12s\n-------------------------\n", "FIRST-NAME", "SECOND-NAME");
    for (int i = 0; i < 5; i++)
        printf("%-13s%s\n", president_names[i][0], president_names[i][1]);
}