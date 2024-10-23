//C Program to add two integers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int1, int2, result;

    printf("\nEnter the two integers to add!\n");

    scanf("%d %d", &int1, &int2);

    result = int1 + int2;

    printf("\nThe result of adding the two integers %d and %d is: %d\n", int1 , int2, result);

    return 0;
}

