//C Program to Check Whether a Character is an Alphabet or not

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char charac;

    printf("Enter the Character to check\n");

    charac=getchar();

    if(((charac >= 'A')&&(charac <= 'Z')) || ((charac >= 'a')&&(charac <= 'z')))
    {
        printf("The Character is an Alphabet");
    }
    else
        printf("The Character is not an Alphabet");
}
