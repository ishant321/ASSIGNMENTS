//Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d", a%10);
    return 0;    
}