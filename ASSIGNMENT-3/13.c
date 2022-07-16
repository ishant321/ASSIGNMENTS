// Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%6 == 0)
        printf("The number is divisible by both 2 and 3");
    else
        printf("The number is not divisible by both 2 and 3");
    return 0;
}