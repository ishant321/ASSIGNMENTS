/*
Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.
*/

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a anything: ");
    scanf("%c", &c);
    if(c>=65 && c<=91)
        printf("The charecter is an alphabate in uppercase");
    else if(c>=97 && c<=123)
        printf("The charecter is an alphabate in lowercase");
    else if(c>=48 && c<=57)
        printf("The charecter is digit");
    else
        printf("The charecter is a special symbol");
    return 0;
}