/*
Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots
*/

#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter a, b and c of a quadratic equation: ");
    scanf("%d%d%d", &a, &b, &c);
    d = (b*b)-(4*a*c);
    if(d>0)
        printf("Roots are real and distinct");
    else if(d == 0)
        printf("Roots are real and equal");
    else
        printf("Roots are imaginary");
    return 0;
}