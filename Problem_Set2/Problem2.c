/*
  Tutorial: Create a Simple Menu in C with User Choices
  This tutorial will walk through a C program that displays a simple menu with three options. The user can choose to display 
  "Good Morning," "Good Evening," or "Exit." The program uses a custom library function clrscr() to clear the screen each time a new menu is shown.
  
  Problem Statement:
  Write a C program that repeatedly displays a menu with three options:
  
  Print "Good Morning"
  Print "Good Evening"
  Exit the program
  
  The program should clear the screen before each new menu display, and only stop when the user selects the "Exit" option.
*/


#include <stdio.h>    
#include <stdlib.h>  
#include <MyLibrary.h> // Custom library containing the clrscr() function for clearing the screen

void main()
{
    char charac;  // Variable to store the user's menu choice
    do
    {
        // Display the menu
        printf("\nSimple Menu:\n");
        printf("------------\n");
        printf("A - Good Morning\n");
        printf("B - Good Evening\n");
        printf("C - Exit\n");

        printf("\nEnter your choice: ");
        charac = getchar();  // Read the user's input

        // Execute different actions based on the user's choice
        switch(charac)
        {
            case 'A':   
                clrscr();  // Clear the screen using custom function
                printf("A - Good Morning\n");
                break;

            case 'B':   
                clrscr();
                printf("B - Good Evening\n");
                break;

            case 'C':   
                clrscr();
                printf("C - Exit\n");
                break;

            default:  
                printf("Invalid choice! Please enter A, B, or C.\n");
                break;
        }
        
        getch();  // Wait for user to press a key before showing the menu again
        clrscr(); // Clear the screen again for the next iteration

    } while (charac != 'C');  // Continue until user chooses 'C' (Exit)
}

