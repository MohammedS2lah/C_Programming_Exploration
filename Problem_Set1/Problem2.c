/*
    Tutorial: How to Write a C Program to Print the ASCII Value of a Character
    In this tutorial, we will learn how to write a C program that takes a character as input from the user 
    and prints its corresponding ASCII value. Understanding how to work with ASCII values is fundamental in C programming, 
    as every character in C is internally represented by a numeric ASCII code.
    
    Problem Statement:
    Write a C program that prompts the user to input a character and then displays the ASCII value of that character.
*/

#include <stdio.h>  
#include <stdlib.h> 

int main()
{
    char charac;  // Declare a variable of type 'char' to store the character input by the user

    printf("\nEnter the character to get the ASCII!\n");  // Prompt the user for input

    scanf("%c", &charac);  // The 'scanf' function reads the input character and stores it in the variable 'charac'

    printf("\nThe ASCII number of the character %c is: %d\n", charac, charac);  
    // Prints both the character and its ASCII value. The format specifier '%c' displays the character, and '%d' prints its ASCII code.

    return 0;  
}

