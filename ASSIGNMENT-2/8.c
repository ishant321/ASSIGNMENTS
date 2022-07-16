//Write a program to check whether the given number is even or odd using a bitwise operator


#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a&1 == 1)
        {
            printf("%d is an odd number", a);
        }
    else
        {
            printf("%d is an even number", a);
        }
    return 0;
}