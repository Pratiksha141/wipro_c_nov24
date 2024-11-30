//Find product of 2 matrices
#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the matrix

// Function to multiply two matrices
void multiplyMatrices(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int A_row, int A_col, int B_row, int B_col) {
    // Initialize result matrix to 0
    for (int i = 0; i < A_row; i++) {
        for (int j = 0; j < B_col; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < A_row; i++) {
        for (int j = 0; j < B_col; j++) {
            for (int k = 0; k < A_col; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A_row, A_col, B_row, B_col;

    // Take dimensions of the first matrix
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &A_row, &A_col);

    // Take dimensions of the second matrix
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &B_row, &B_col);

    // Matrix A and Matrix B must have A_col == B_row for multiplication
    if (A_col != B_row) {
        printf("Matrix multiplication is not possible. The number of columns of A must be equal to the number of rows of B.\n");
        return 1;
    }

    // Declare the matrices
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Input elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < A_row; i++) {
        for (int j = 0; j < A_col; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < B_row; i++) {
        for (int j = 0; j < B_col; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices A and B
    multiplyMatrices(A, B, result, A_row, A_col, B_row, B_col);

    // Display the result of multiplication
    printf("Product of matrix A and matrix B is:\n");
    printMatrix(result, A_row, B_col);

    return 0;
}
