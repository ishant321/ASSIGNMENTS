//Write a program to input a three-digit number and display the sum of the digits.


#include<stdio.h>
int main()
{
    int a, sum = 0, h = 0;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    sum = a/100;
    h = a-(sum*100);
    sum = sum+(h/10);
    h = h%10;
    sum = sum+h;
    printf("Sum of unit digit is %d", sum);
    return 0;
}