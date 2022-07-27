/*Write a function to calculate the number of combinations one can make from n items 
and r selected at a time. (TSRS)*/

#include<stdio.h>
int pnc(int, int);
int main()
{
    int n, r;
    printf("Enter n are r: ");
    scanf("%d%d", &n, &r);
    printf("The number of combinations from %d items and %d selected at a time is %d", n,r,pnc(n,r));
    return 0;
}

int pnc(int x, int y)
{
    int fact_x=1, fact_y=1, i=1, fact_xy=1;
    while(i<=x)
    {
        fact_x = fact_x*i;
        i++;
    }
    i=1;
    while(i<=y)
    {
        fact_y = fact_y*i;
        i++;
    }
    i = 1;
    while(i<=x-y)
    {
        fact_xy = fact_xy*i;
        i++;
    }
    return fact_x/(fact_y*fact_xy);
}