//Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int n, count=0, i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(i<=n)
        {
            if(n%i == 0)
                count++;
            i++;
        }
    if(count ==2)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);
    return 0;
}