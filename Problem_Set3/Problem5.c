/*
Tutorial: C Program to Add Two Matrices and Display the Result
In this tutorial, we will create a C program to add two matrices and store the result in a third matrix, then display all three matrices. 
Matrix addition is fundamental in various mathematical and computational tasks.

Problem Statement:
Write a C program that:
    1) Accepts two matrices of the same dimensions from the user.
    2) Adds the corresponding elements of the matrices.
    3) Stores the result in a third matrix and displays all matrices.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int Rows, Columns;
    int i, j;

    // Prompt the user to enter the dimensions of the matrices
    printf("\nEnter Matrices dimensions (Rows and Columns):\n");
    scanf("%d %d", &Rows, &Columns);

    int Matrix1[Rows][Columns]; // First matrix
    int Matrix2[Rows][Columns]; // Second matrix
    int Result[Rows][Columns];  // Resultant matrix to store the sum

    // Input for Matrix1
    printf("\n\tEnter Matrix1 Elements!\n");
    for (i = 0; i < Rows; i++) {
        printf("\nEnter Row %d Elements:\n", i);
        for (j = 0; j < Columns; j++) {
            scanf("%d", &Matrix1[i][j]);
        }
    }

    // Input for Matrix2
    printf("\n\tEnter Matrix2 Elements!\n");
    for (i = 0; i < Rows; i++) {
        printf("\nEnter Row %d Elements:\n", i);
        for (j = 0; j < Columns; j++) {
            scanf("%d", &Matrix2[i][j]);
        }
    }

    // Calculate the sum of Matrix1 and Matrix2 and store in Result
    for (i = 0; i < Rows; i++) {
        for (j = 0; j < Columns; j++) {
            Result[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }

    // Display Matrix1
    printf("\nMatrix1 Elements are:\n");
    for (i = 0; i < Rows; i++) {
        printf("\n");
        for (j = 0; j < Columns; j++) {
            printf("\t%d\t", Matrix1[i][j]);
        }
    }

    // Display Matrix2
    printf("\nMatrix2 Elements are:\n");
    for (i = 0; i < Rows; i++) {
        printf("\n");
        for (j = 0; j < Columns; j++) {
            printf("\t%d\t", Matrix2[i][j]);
        }
    }

    // Display Resultant Matrix
    printf("\nElements of Resultant Matrix after Addition are:\n");
    for (i = 0; i < Rows; i++) {
        printf("\n");
        for (j = 0; j < Columns; j++) {
            printf("\t%d\t", Result[i][j]);
        }
    }

    return 0;
}
