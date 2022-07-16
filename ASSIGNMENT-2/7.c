//Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
    int a, count = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(1)
    {
        if(a&1 == 1)
            {
            printf("%d", count);
            break;
            }
        else
            {
            a = a>>1;
            count++;
            }
    }
    return 0;
}