//Find Nth term of the series: 1 2 2 3 3 5 5 7 8 11 13 13
#include <stdio.h>

// Function to find the Fibonacci number at the nth position
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N;
    
    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int count = 0, fibIndex = 0;
    
    // Iterate through the sequence and find the Nth term
    for (int i = 1; count < N; i++) {
        int currentFib = fibonacci(fibIndex);
        
        // Each Fibonacci number appears twice
        if (count + 1 == N) {
            printf("The %dth term is: %d\n", N, currentFib);
            return 0;
        }
        
        count++;
        if (count + 1 == N) {
            printf("The %dth term is: %d\n", N, currentFib);
            return 0;
        }

        count++;
        fibIndex++;
    }
    return 0;
}