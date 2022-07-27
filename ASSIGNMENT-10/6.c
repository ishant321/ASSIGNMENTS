//Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, fact(a));
    return 0;
}

int fact(int x)
{
    int i = 1, f = 1;
    while(i<=x)
        {
            f = f*i;
            i++;
        }
    return f;
}