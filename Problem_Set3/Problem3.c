// C Program to Calculate Sum of each row in a 2D Array. (3 std, 4 subjects)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int std_number, subjects;
    int i, j;

    printf("\nEnter the number of students:\n");
    scanf("%d", &std_number);

    printf("\nEnter the number of subjects:\n");
    scanf("%d", &subjects);

    int Array[std_number][subjects];
    int Sum[std_number];
    //int Sum[3] ={0};

    for (i=0; i<std_number; i++) {
        Sum[i] = 0;
    }

    for (i=0; i<std_number; i++)
    {
        printf("\nEnter Student%d Grades:\n", i+1);

        for (j=0; j<subjects; j++)
        {
            printf("\nEnter Subject%d Grade:\n", j+1);
            scanf("%d", &Array[i][j]);
            Sum[i] += Array[i][j];
        }
    }

    printf("\nStudents Grades in all subjects are:\n");

    for (i=0; i<std_number; i++)
    {
        printf("\nStudent%d Grades are:\n", i+1);

        for (j=0; j<subjects; j++)
        {
            printf("\t%d\t", Array[i][j]);
        }

        printf("\nStudent%d Total Grades are: %d\n", i+1, Sum[i]);
        printf("\n");

    }
    return 0;
}
