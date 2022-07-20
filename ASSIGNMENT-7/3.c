//Write a program to check whether a given number is there in the Fibonacci series or not.


#include<stdio.h>
int main()
{
    int a=1, b=1, n, i, c;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            c = b;
            b = a+b;
            a = c;
            if(n == a+b)
            {
                printf("Yes.%d is in the fibonacci series", n);
                break;
            }
            else
            {
                printf("No.%d is not in the fibonacci series", n);
                break;
            }
    }
    return 0;
}