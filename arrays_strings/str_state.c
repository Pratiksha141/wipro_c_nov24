#include<stdio.h>
int main()
{
    char state_name[10][2][32] = {" "} ;
    char capital[10][2][32]    = {" "};
    puts(" Enter First state name and second state name of 10 places ");
    for(int i=0; i<10; i++)

    {
        scanf("%s", &state_name[i][0]) ;
         scanf("%s",&capital[i][0]) ;
        
    }
    printf("%-12s %-12s\n-------------------------\n", "FIRST-STATE", "SECOND-STATE");
         for (int i = 0; i < 5; i++)
        printf("%-13s %s\n", state_name[i][0] , capital[i][0]);
       

}