/*
    Tutorial: How to Write a C Program to Add Two Integers
    In this tutorial, we will create a simple C program that takes two integers as input from the user, 
    adds them together, and prints the result. This program will help us understand basic arithmetic operations and how to handle integer inputs in C.
    
    Problem Statement:
    Write a C program that reads two integers from the user, adds them together, and displays the result.
*/

#include <stdio.h>  
#include <stdlib.h> 

int main()
{
    int int1, int2, result;  // Declare variables to store two integers and the result

    printf("\nEnter the two integers to add!\n");  

    scanf("%d %d", &int1, &int2);  

    result = int1 + int2;  

    printf("\nThe result of adding the two integers %d and %d is: %d\n", int1, int2, result);  
    // Print the result of the addition using '%d' to display integers

    return 0;  
}
