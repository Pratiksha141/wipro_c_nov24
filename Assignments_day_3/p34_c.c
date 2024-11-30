//Find sum of the series: n - n2/3 + n4/5 - n8/7 + .... m terms (1<=n<=3,1<=m<=10)
#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    double sum = 0;

    // Input the value of n (1 <= n <= 3) and m (1 <= m <= 10)
    printf("Enter the value of n (1 <= n <= 3): ");
    scanf("%d", &n);
    printf("Enter the number of terms (1 <= m <= 10): ");
    scanf("%d", &m);

    // Validate the input values for n and m
    if (n < 1 || n > 3 || m < 1 || m > 10) {
        printf("Invalid input. Please make sure that 1 <= n <= 3 and 1 <= m <= 10.\n");
        return 1; // Exit the program if input is invalid
    }

    // Loop to calculate the sum of the series
    for (int i = 0; i < m; i++) {
        int exponent = pow(2, i);  // Exponent is 2^i for each term
        int denominator = 3 + 2 * i;  // Denominator starts at 3 and increases by 2 each time
        double term = pow(n, exponent) / denominator;  // Calculate the term

        // Alternate the sign of the terms
        if (i % 2 == 0) {
            sum += term;  // Add for even i
        } else {
            sum -= term;  // Subtract for odd i
        }
    }

    // Output the result
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}