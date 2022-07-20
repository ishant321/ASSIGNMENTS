//Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int n, d, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        d = n%10;
        sum = sum*10 + d;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}