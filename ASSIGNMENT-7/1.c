//Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main()
{
    int a=1, b=1, n, i, c;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n-3;i++)
    {
            c = b;
            b = a+b;
            a = c;
    }
    printf("The %dth term is %d",n, a+b);
    return 0;
}