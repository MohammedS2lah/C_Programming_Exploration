/*
  Tutorial: C Program to Find the Largest Number Among Three Numbers
  This tutorial will help you understand how to write a C program to find the largest number among three given numbers. 
  This is a simple program that uses conditional statements to compare numbers.
  
  Problem Statement:
  Write a C program that reads three integers from the user and determines the largest of the three numbers. 
  The program should display the largest number at the end.
*/


#include <stdio.h>    
#include <stdlib.h>   

void main()
{
    int num1, num2, num3;   // Variables to store the three input numbers
    int larger, largest;    // Temporary variables to help find the largest number

    printf("Enter the three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);  // Read the three integers from the user

    // Compare num1 and num2, and store the larger one in 'larger'
    if(num1 > num2)
        larger = num1;
    else
        larger = num2;

    // Compare 'larger' with num3 to determine the largest number
    if(larger > num3)
        largest = larger;
    else
        largest = num3;

    printf("\nThe largest number is %d\n", largest);  // Output the largest number
}

