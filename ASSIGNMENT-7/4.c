//Write a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int a, b, hcf, i;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    if(a<b)
    {
        for(i=a;i>=1;i--)
        {
            if(a%i == 0 && b%i == 0)
            {
                printf("%d is the HCF of the numbers %d and %d", i, a, b);
                break;
            }
        }
    }
    else
    {
        for(i=b;i>=1;i--)
        {
            if(a%i == 0 && b%i == 0)
            {
                printf("%d is the HCF of the numbers %d and %d", i, a, b);
                break;
            }
        }
    }
    return 0;
}