/*
Write a program to check whether a given number is an even number or an odd number without using % operator.
*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a&1==1)
        printf("The number is odd");
    else
        printf("The number is even");
    return 0;
}