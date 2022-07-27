/*Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS)*/

#include<stdio.h>
int permutation(int, int);
int main()
{
    int n, r;
    printf("Enter n are r: ");
    scanf("%d%d", &n, &r);
    printf("The number of arrangements from %d items and %d selected at a time is %d", n,r,permutation(n,r));
    return 0;
}

int permutation(int x, int y)
{
    int fact_x=1, i=1, fact_xy=1;
    while(i<=x)
    {
        fact_x = fact_x*i;
        i++;
    }
    i=1;
    while(i<=x-y)
    {
        fact_xy = fact_xy*i;
        i++;
    }
    return fact_x/fact_xy;
}