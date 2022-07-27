// Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
int area(int);
int main()
{
    int a, ar;
    printf("Enter the radius of the circle: ");
    scanf("%d", &a);
    ar = area(a);
    printf("The area of the circle is %d", ar);
    return 0;
}

int area(int x)
{
    return(22*x*x)/7;
}