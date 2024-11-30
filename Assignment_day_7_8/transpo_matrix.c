//Find the transpose of a matrix
#include <stdio.h>

#define MAX_SIZE 10  // Maximum size of the matrix

// Function to find the transpose of a matrix
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int transpose[MAX_SIZE][MAX_SIZE], int row, int col) {
    // Swap rows and columns to compute the transpose
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = matrix[i][j];
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
    int row, col;

    // Take matrix dimensions as input
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);

    // Declare the matrix and its transpose
    int matrix[MAX_SIZE][MAX_SIZE], transpose[MAX_SIZE][MAX_SIZE];

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the transpose of the matrix
    transposeMatrix(matrix, transpose, row, col);

    // Display t
