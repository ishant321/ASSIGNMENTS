//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabate: ");
    scanf("%c", &a);
    if(a>=97)
        printf("The alphabate is in lowercase");
    else
        printf("The alphabate is in uppercase");
    return 0;
}