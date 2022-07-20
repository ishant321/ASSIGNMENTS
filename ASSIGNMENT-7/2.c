//Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main()
{
    int a=1, b=1, n, i, c;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n%d\n", a, b);
    for(i=1;i<=n-3;i++)
    {
            c = b;
            b = a+b;
            a = c;
            printf("%d\n", a+b);
    }
    return 0;
}