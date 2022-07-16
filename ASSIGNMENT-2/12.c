/*
Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
*/

#include<stdio.h>
int main()
{
    float inr;
    printf("Enter the value in INR: ");
    scanf("%f", &inr);
    printf("The amount %f in INR will convert to %2f in USD", inr, inr*76.23);
    return 0;
}