//Write a program in C to find the square of any number using the function.

#include<stdio.h>
int sq(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The square of %d is %d", n, sq(n));
    return 0;
}

int sq(int x)
{
    return x*x;
}