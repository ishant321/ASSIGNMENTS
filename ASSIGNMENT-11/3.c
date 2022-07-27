//Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>
char prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%c", prime(n));
}

char prime(int x)
{
    int i = 1, count = 0;
    while(i<=x)
    {
        if(x%i == 0)
            count++;
        i++;
    }
    if(count == 2)
        return 'y';
    else
        return 'n';
}