/*
  Tutorial: Write a C Program to Continuously Receive Numbers Until the Sum Exceeds 100
  In this tutorial, we will create a C program that prompts the user to enter numbers continuously and stops 
  when the cumulative sum of these numbers exceeds 100. This program introduces the use of a while loop 
  to perform repeated operations based on a condition.
  
  Problem Statement:
  Write a C program that continuously receives numbers from the user and calculates their cumulative sum. 
  The program should stop taking input and display the total sum as soon as it exceeds 100.
*/
  
#include <stdio.h>   
#include <stdlib.h> 

void main()
{
    int num;  
    int sum = 0; 

    printf("Enter numbers to add to the sum. The program will exit when the sum exceeds 100.\n");

    while(sum < 100)  // Loop continues as long as sum is less than 100
    {
        scanf("%d", &num);  // Read an integer from the user
        sum += num;  // Add the entered number to the cumulative sum
    }

    printf("Sum is %d\n", sum);  
}

