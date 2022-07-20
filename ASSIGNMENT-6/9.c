//Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int a, b, i, lcm=1;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if(a<b)
        {
        i = a;
        while(i<=a && i>=1)
            {
             if(a%i == 0 && b%i == 0)
                {
                 a = a/i;
                 b = b/i;
                 lcm = lcm*i;
                }
             i--;
            }
        }
    else
    {
       i = b;
        while(i<=b && i>=1)
            {
             if(b%i == 0 && a%i == 0)
                {
                 a = a/i;
                 b = b/i;
                 lcm = lcm*i;
                }
             i--; 
            }
    }
    printf("%d", lcm*a*b);
    return 0;

}