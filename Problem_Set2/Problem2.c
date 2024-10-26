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
#include <MyLibrary.h>

void main()
{
    char charac;
    do
    {
    printf("\nSimple Menu:\n");
    printf("------------\n");
    printf("A-Good Morning \nB-Good Evening\nC-Exit \n");
    printf("\nEnter your choice:");

    charac = getchar();

    switch(charac)
    {
        case 'A':   clrscr();
                    printf("A-Good Morning");
                    break;

        case 'B':   clrscr();
                    printf("B-Good Evening");
                    break;

        case 'C':
                    clrscr();
                    printf("C-Exit");
                    break;
    }
    getch();
    clrscr();
    }
    while (charac != 'C');
}
