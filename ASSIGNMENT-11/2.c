//Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>
int hcf(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("The HCF of %d and %d is %d", a, b, hcf(a,b));
    return 0;
}

int hcf(int x, int y)
{
    int i;
    for(i = x*y; i>=1; i--)
    {
        if(x%i == 0 && y%i ==0)
            return i;
    }
}