/*
Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)
*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    a = a-(a%10);
    printf("%d", a);
    return 0;
}
