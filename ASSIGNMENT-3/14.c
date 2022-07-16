//Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%7 == 0)
        printf("The number is divisible by 7");
    else if(a%3 == 0)
        printf("The number is divisibly by 3");
    else
        printf("The number is not divisible by any of 3 or 7");
    return 0;
}