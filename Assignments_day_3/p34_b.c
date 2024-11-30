//Find sum of the series: 1 - n + n2 - n3 + .... m terms
#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate the sum of the first 10 terms
    for (int i = 1; i <= 10; i++) {
        sum += pow(n, i); // pow(n, i) computes n raised to the power of i
    }

    // Output the result
    printf("The sum of the series is: %d\n", sum);
    
    return 0;
}