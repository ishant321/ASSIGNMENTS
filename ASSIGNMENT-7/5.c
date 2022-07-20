//Write a program to check whether two given numbers are co-prime numbers or not

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
                if(i == 1)
                {
                    printf("Yes.%d and %d are co-prime", a, b);
                    break;
                }
                else;
                {
                    printf("No.%d and %d are not co-prime", a, b);
                    break;
                }
            }
        }
    }
    else
    {
        for(i=b;i>=1;i--)
        {
            if(a%i == 0 && b%i == 0)
            {
               if(i == 1)
                {
                    printf("Yes.%d and %d are co-prime", a, b);
                    break;
                }
                else;
                {
                    printf("No.%d and %d are not co-prime", a, b);
                    break;
                }
            }
        }
    }
    return 0;
}