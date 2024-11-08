/*
Tutorial: C Program to Calculate Sum of Each Row in a 2D Array
In this tutorial, we will learn how to create a C program that calculates and displays 
the sum of grades for each student across multiple subjects using a 2D array.

Problem Statement:
Write a C program that:
    1) Takes input for the number of students and subjects.
    2) Accepts grades for each subject for each student.
    3) Calculates and prints the total sum of grades for each student.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int std_number, subjects;
    int i, j;

    // Prompt the user for the number of students and subjects
    printf("\nEnter the number of students:\n");
    scanf("%d", &std_number);

    printf("\nEnter the number of subjects:\n");
    scanf("%d", &subjects);

    // Declare a 2D array for grades and a 1D array to store sum of grades for each student
    int Array[std_number][subjects];
    int Sum[std_number];

    // Initialize the sum array to 0 for each student
    for (i = 0; i < std_number; i++) {
        Sum[i] = 0;
    }

    // Input: Read grades for each student
    for (i = 0; i < std_number; i++) {
        printf("\nEnter Student %d Grades:\n", i + 1);
        for (j = 0; j < subjects; j++) {
            printf("\nEnter Subject %d Grade:\n", j + 1);
            scanf("%d", &Array[i][j]);
            Sum[i] += Array[i][j];  // Calculate the sum while reading the input
        }
    }

    // Output: Display grades and total sum for each student
    printf("\nStudents' Grades in all subjects are:\n");
    for (i = 0; i < std_number; i++) {
        printf("\nStudent %d Grades are:\n", i + 1);
        for (j = 0; j < subjects; j++) {
            printf("\t%d\t", Array[i][j]);
        }
        printf("\nStudent %d Total Grades are: %d\n", i + 1, Sum[i]);
    }

    return 0;
}

