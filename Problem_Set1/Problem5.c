//C Program to print Hexa of a number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\n\tEnter an integer to represent in Hexadecimal: \n");

    scanf("%d", &num);

    printf("\n\tHexadecimal representation of %d is: %X\n", num, num);

    return 0;
}

