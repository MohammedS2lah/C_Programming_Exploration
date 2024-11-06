/*
Tutorial: C Program to Check Whether a Character is an Alphabet
In this tutorial, we will create a C program that checks whether a given character is an alphabet letter (A-Z or a-z) or not.

Problem Statement:
Write a C program that reads a single character from the user and determines if it is an alphabet letter. 
If the character is within the range of uppercase or lowercase alphabet characters, the program should output that it is an alphabet. 
Otherwise, it should indicate that the character is not an alphabet.
*/

#include <stdio.h>    
#include <stdlib.h>   

void main()
{
    char charac;    // Variable to store the input character

    printf("Enter the Character to check:\n");

    charac = getchar();   // Read a single character input from the user

    // Check if the character falls within the ranges of uppercase (A-Z) or lowercase (a-z) letters
    if(((charac >= 'A') && (charac <= 'Z')) || ((charac >= 'a') && (charac <= 'z')))
    {
        printf("The Character is an Alphabet\n");
    }
    else
    {
        printf("The Character is not an Alphabet\n");
    }
}

