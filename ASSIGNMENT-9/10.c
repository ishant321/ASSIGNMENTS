//C program to find all roots of a quadratic equation using switch case

#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, D;
    printf("Enter the value of a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);
    D = b*b - 4*a*c;
    switch (D >= 0)
    {
    case 0:
        printf("Roots are %f+%fi and %f-%fi", -(b/(2*a)),sqrt(-D)/(2*a), -(b/(2*a)),sqrt(-D)/(2*a));
        break;
    case 1:
        printf("Roots are %f and %f", (-b+sqrt(D))/(2*a), (-b-sqrt(D))/(2*a));
        break;
    }
    return 0;
}
