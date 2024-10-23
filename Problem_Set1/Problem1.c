/*
    Tutorial: How to Write a Simple C Program to Print "Hello World!"
    In this tutorial, we will walk through one of the most basic programs in C programming: printing "Hello World!" to the console. This is often the first step for anyone learning a new programming language, as it introduces you to the basic structure of a C program.
    
    Problem Statement:
    Write a C program that prints the message "Hello World!" to the console.
*/

#include <stdio.h>  // This is a header file that contains the declaration of the printf function
#include <stdlib.h> // Another header file, commonly included for general-purpose functions like memory management, random number generation, etc.

int main()         // The main function is where the program execution begins
{
    printf("Hello world!\n");  // The printf function prints the text "Hello World!" followed by a newline character \n

    return 0;       // The return statement ends the program and returns 0, signaling successful execution
}
