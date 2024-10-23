//C Program to make simple calculations (add, sub, multiply, divid) on two integers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int1, int2, result, calc_num;

    printf("\nEnter the two integers to perform calculations!\n");

    scanf("%d %d", &int1, &int2);

    printf("\nEnter the type of calculation to perform!\n");
    printf("\nFor Addition Enter: 1 \t For Subtraction Enter: 2 \t For Multiplication Enter: 3 \t For Division Enter: 4\n");

    scanf("%d", &calc_num);

    switch(calc_num)
    {
        case 1:     result = int1 + int2;
                    printf("\nThe result of adding the two integers %d and %d is: %d\n", int1 , int2, result);
                    break;

        case 2:     result = int1 - int2;
                    printf("\nThe result of Subtracting the two integers %d and %d is: %d\n", int1 , int2, result);
                    break;

        case 3:     result = int1 * int2;
                    printf("\nThe result of Multiplying the two integers %d and %d is: %d\n", int1 , int2, result);
                    break;

        case 4:     result = int1 / int2;
                    printf("\nThe result of Dividing the two integers %d and %d is: %d\n", int1 , int2, result);
                    break;
    }

    return 0;
}
