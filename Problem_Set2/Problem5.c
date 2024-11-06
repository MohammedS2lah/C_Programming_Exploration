/*
Tutorial: C Program to Generate a Multiplication Table
This tutorial explains how to create a C program that generates a multiplication table for a given number up to a specified limit.

Problem Statement:
Write a C program that reads a number and an upper limit from the user, then 
prints the multiplication table for that number from 1 up to the specified limit.
*/

#include <stdio.h>    
#include <stdlib.h>   

void main()
{
    int num, limit;            // Variables for the number and limit of the multiplication table
    int result = 0;            // Variable to store the result of each multiplication

    printf("Enter the number to generate multiplication table for and the upper limit\n");
    scanf("%d %d", &num, &limit);   // Read the number and the limit

    printf("\nThe multiplication table for %d is:\n", num);

    int i;
    for(i = 1; i <= limit; i++)     // Loop from 1 to the specified limit
    {
        result = i * num;           // Calculate the result of i * num
        printf("\t%d * %d = %d\n", i, num, result);   // Print each line of the table
    }
}

