/// C Program to compute Quotient and Remainder

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int1, int2, Quotient, Remainder;

    printf("\nEnter the two integers to compute Quotient and Remainder!\n");

    scanf("%d %d", &int1, &int2);

    Quotient = int1/int2;

    Remainder = int1%int2;

    printf("\nThe Quotient is: %d \t and the Remainder is: %d\n", Quotient, Remainder);

    return 0;
}
