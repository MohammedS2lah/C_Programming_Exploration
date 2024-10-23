/*
Tutorial: How to Write a C Program for Simple Arithmetic Calculations
In this tutorial, we will create a C program that allows the user to perform basic arithmetic operations—addition, subtraction, 
multiplication, and division—on two integers. The user will choose the desired operation, and the program will compute and display the result.

Problem Statement:
Write a C program that reads two integers from the user, asks for the type of arithmetic operation 
(addition, subtraction, multiplication, or division), and prints the result of the operation.
*/


#include <stdio.h>  
#include <stdlib.h> 

int main()
{
    int int1, int2, result, calc_num;  // Declare variables to store two integers, the result, and the chosen operation

    printf("\nEnter the two integers to perform calculations!\n"); 
    scanf("%d %d", &int1, &int2);  

    printf("\nEnter the type of calculation to perform!\n");
    printf("\nFor Addition Enter: 1 \t For Subtraction Enter: 2 \t For Multiplication Enter: 3 \t For Division Enter: 4\n");  
    // Prompt the user to choose an operation

    scanf("%d", &calc_num);  

    switch(calc_num)  // Use a switch statement to perform the appropriate operation based on the user's input
    {
        case 1:     result = int1 + int2;  // Addition
                    printf("\nThe result of adding the two integers %d and %d is: %d\n", int1, int2, result);
                    break;

        case 2:     result = int1 - int2;  // Subtraction
                    printf("\nThe result of subtracting the two integers %d and %d is: %d\n", int1, int2, result);
                    break;

        case 3:     result = int1 * int2;  // Multiplication
                    printf("\nThe result of multiplying the two integers %d and %d is: %d\n", int1, int2, result);
                    break;

        case 4:     if (int2 != 0)  // Division (check for division by zero)
                    {
                        result = int1 / int2;
                        printf("\nThe result of dividing the two integers %d and %d is: %d\n", int1, int2, result);
                    }
                    else  // Handle division by zero error
                    {
                        printf("\nError: Division by zero is not allowed.\n");
                    }
                    break;

        default:    printf("\nInvalid choice! Please enter a number between 1 and 4.\n");  // Handle invalid input
    }

    return 0;
}
