//C Program to print ASCII number of a given char

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charac;

    printf("\nEnter the character to get the ASCII!\n");

    scanf("%c", &charac);

    printf("\nThe ASCII number of the character %c is: %d\n", charac , charac);

    return 0;
}
