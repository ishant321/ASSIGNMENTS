//Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
void o_natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    o_natural(n);
    return 0;
}

void o_natural(int x)
{
    int i = 1;
    while(i<=2*x)
    {
        printf("%d\n", i);
        i=i+2;
    }
}