//Program to Convert even number into its upper nearest odd number Switch Statement.

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter an even number: ");
    scanf("%d", &a);
    if( a%2 == 0)
        b = a/a;
    switch(b)
    {
        case 1:
            printf("%d", a+1);
            break;
        case -1:
            printf("%d", a);
            break;
        default:
            printf("Invalid Number");

    }
    return 0;
}
