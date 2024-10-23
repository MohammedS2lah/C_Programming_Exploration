/*
    Tutorial: How to Write a C Program to Print a Float Number Entered by the User
    In this tutorial, we will write a simple C program that reads a floating-point number (a number with decimal points) 
    from the user and prints it back to the console. Working with different data types, like floats, is essential when dealing with 
    real-world numerical data in programming.
    
    Problem Statement:
    Write a C program that prompts the user to enter a float (decimal) number and then displays the entered number.
*/
    
#include <stdio.h>  
#include <stdlib.h>

int main()
{
    float num;  // Declare a variable of type 'float' to store the floating-point number

    printf("\nEnter the Float number!\n");  

    scanf("%f", &num);  

    printf("\nThe Float number you entered is: %f\n", num);  
    // Prints the floating-point number using the '%f' format specifier

    return 0; 
}

