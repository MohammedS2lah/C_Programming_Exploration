/*
Tutorial: Create a "Magic Box" in C
In this tutorial, we will create a C program that generates a "magic box"—a square grid where numbers are placed sequentially 
in specific positions. This code uses a custom function gotoxy() to control cursor positioning and Sleep() to add a delay, 
making the number placements visible as they appear one by one.

Problem Statement:
Write a C program that displays a "magic box" grid of size n x n based on a user-provided dimension n. The numbers are placed 
sequentially in a specific pattern, starting from the middle column of the first row.
*/


#include <stdio.h>     
#include <MyLibrary.h> // Custom library with gotoxy() and clrscr()
#include <time.h>      // For Sleep() function to add delay

void main()
{
    int x, size;             // Variable for box dimension and total size
    int row = 1;             // Start at the first row
    printf(" Welcome to the magic box \n--------------\n\n Please enter your magic box dimension: ");
    scanf("%d", &x);         // Read the magic box dimension
    
    int col = (x / 2) + 1;   // Calculate the middle column for starting point
    size = x * x;            // Calculate the total number of cells in the box
    clrscr();                // Clear the screen

    int box;
    for(box = 1; box <= size; box++)  // Loop for each number in the box
    {
        gotoxy(col * 6 + 5, row * 4 + 5);  // Position cursor to print number
        printf("%d", box);                 // Print the number in the current position
        Sleep(1000);                       // Add delay for visual effect

        // Adjust the row and column for the next number placement
        if(box % x == 0)
        {
            row++;                // Move down to the next row if divisible by box dimension
            if(row > x)
                row = 1;          // Wrap around to the first row if needed
        }
        else
        {
            row--;                // Move up one row
            col--;                // Move left one column
            if(col == 0)
                col = x;          // Wrap around to the last column if needed
            if(row == 0)
                row = x;          // Wrap around to the last row if needed
        }
    }
    getch();  // Wait for user input to exit
}

