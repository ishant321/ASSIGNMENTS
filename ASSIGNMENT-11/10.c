//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function
#include<stdio.h>
int fact(int);
int cal(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum is %d", cal(n));
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

int cal(int x)
{
    int i, sum = 0;
    for(i = 1; i <= x; i++)
    {
        sum = sum + fact(i)/i;
    }
    return sum;
}