/*
    Tutorial: How to Write a C Program to Print the Hexadecimal Representation of an Integer
    In this tutorial, we will learn how to write a C program that takes an integer as input from the user and prints its hexadecimal (base-16) representation. Understanding number systems, like hexadecimal, is important when dealing with low-level programming, memory addressing, and bitwise operations.
    
    Problem Statement:
    Write a C program that prompts the user to enter an integer and then displays its hexadecimal representation.
*/

#include <stdio.h>  
#include <stdlib.h> 

int main()
{
    int num;  
    printf("\n\tEnter an integer to represent in Hexadecimal: \n");  

    scanf("%d", &num); 

    printf("\n\tHexadecimal representation of %d is: %X\n", num, num);  
    // Prints the hexadecimal representation of the integer. '%X' is used to print in uppercase hexadecimal format.

    return 0; 
}
