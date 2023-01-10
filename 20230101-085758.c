/*  
C program to find SUM and AVERAGE of two integer 
Numbers using User Define Functions.
*/

#include <stdio.h>

/*function declarations*/
int sumTwoNum(int, int); /*to get sum*/
float averageTwoNum(int, int); /*to get average*/

int main()
{
    int number1, number2;
    int sum;
    float avg;

    printf("Enter the first integer number: ");
    scanf("%d", &number1);

    printf("Enter the second integer number: ");
    scanf("%d", &number2);

    /*function calling*/
    sum = sumTwoNum(number1, number2);
    avg = averageTwoNum(number1, number2);

    printf("Number1: %d, Number2: %d\n", number1, number2);
    printf("Sum: %d, Average: %f\n", sum, avg);

    return 0;
}

/*function definitions*/
/*
 * Function     : sumTwoNum
 * Arguments    : int,int - to pass two integer values
 * return type  : int - to return sum of values
*/
int sumTwoNum(int x, int y)
{
    /*x and y are the formal parameters*/
    int sum;
    sum = x + y;
    return sum;
}

/*
 * Function     : averageTwoNum
 * Arguments    : int,int - to pass two integer values
 * return type  : float - to return average of values
*/
float averageTwoNum(int x, int y)
{
    /*x and y are the formal parameters*/
    float average;
    return ((float)(x) + (float)(y)) / 2;
}
