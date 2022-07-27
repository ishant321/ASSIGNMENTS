/*
Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement
*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a/a;
    switch(b)
    {
        case 1:
            printf("%d",-a);
            break;
        case -1:
            printf("%d", -a);
            break;
        default:
            printf("0");

    }
    return 0;
}