// Hollow Square Using an Array:
#include<stdio.h>
int main()
{
    int n; 
    printf("Enter the size of the square:");
    scanf("%d", &n);
    char square[n][n];
    for(int i=0; i<n; i++)

{
    for(int j=0; j<n; j++)
    {
        if(i == 0 || i == n-1 || j==0 || i == n-1)
        {
            square[i][j] = ' ';

        }
    }
}

for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", square[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

