/*
Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right
*/

#include<stdio.h>
int main()
{
    int a, b, c, d=0;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    b = a%10;
    c = a/10;
    d = (b*100)+c;
    printf("%d", d);
    return 0;
}