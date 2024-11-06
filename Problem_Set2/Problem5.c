//C Program to Generate Multiplication Table "1*3=3, 2*3=6, ..."

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, limit;
    int result = 0;

    printf("Enter the number to generate multiplication table for and the upper limit\n");

    scanf("%d %d", &num, &limit);

    printf("\nThe multiplication table for %d is\n", num);

    int i;
    for(i = 1; i <= limit; i++)
    {
        result = i * num;
        printf("\t%d * %d = %d\n", i, num, result);
    }
}
