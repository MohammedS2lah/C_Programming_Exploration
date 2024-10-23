/*
Tutorial: How to Write a C Program to Compute Quotient and Remainder
In this tutorial, we will create a C program that takes two integers as input from the user, computes 
the quotient and remainder when the first integer is divided by the second, and displays the result. 
This is a common operation in programming, especially when dealing with division in arithmetic.

Problem Statement:
Write a C program that reads two integers, computes the quotient and remainder of their division, and displays the results.
*/


#include <stdio.h>  
#include <stdlib.h> 

int main()
{
    int int1, int2, Quotient, Remainder;  // Declare variables to store the two integers, quotient, and remainder

    printf("\nEnter the two integers to compute Quotient and Remainder!\n");  
    scanf("%d %d", &int1, &int2);  

    Quotient = int1 / int2;  // Division gives the quotient
    Remainder = int1 % int2;  // Modulus gives the remainder
    
    printf("\nThe Quotient is: %d \t and the Remainder is: %d\n", Quotient, Remainder);

    return 0;  
}
