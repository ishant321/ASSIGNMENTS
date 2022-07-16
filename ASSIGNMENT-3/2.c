//Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%5==0)
        printf("The number is divisible by 5");
    else
        printf("The number is not divisible by 5");
    return 0;
}