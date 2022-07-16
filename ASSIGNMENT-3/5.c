//Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(printf("%d", a) == 3)
        printf(" is a three digit number");
    else
        printf(" is not a three digit number");
    return 0;
}