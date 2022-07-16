//Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
    return 0;
}