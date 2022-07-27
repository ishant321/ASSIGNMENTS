/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    char n;
    while(1)
    {
        printf("\na. Check whether a given set of three numbers are lengths of an isosceles triangle or not\nb. Check whether a given set of three numbers are lengths of sides of a right angle triangle or not\nc. Check whether a given set of three numbers are equilateral triangle or not\nd.Exit\nEnter your choice: \n");
        fflush(stdin);
        scanf("%c", &n);
        switch(n)
        {
            case 'a':
                printf("Enter three number: \n");
                scanf("%d%d%d", &a, &b, &c);
                if(a == b || b == c || c == a)
                {
                    printf("The lengths are of a isoceles triangle.\n");
                }
                else
                {
                    printf("The lengths are not the length of a isoceles triangle.\n");
                }
                break;
            case 'b':
                printf("Enter three number: \n");
                scanf("%d%d%d", &a, &b, &c);
                if(b*b == a*a+c*c || a*a==b*b+c*c || c*c == a*a+b*b)
                {
                    printf("The lengths are of a right angle triangle.\n");
                }
                else
                {
                    printf("The lengths are not the length of a right triangle.\n");
                }
                break;
            case 'c':
                printf("Enter three number: \n");
                scanf("%d%d%d", &a, &b, &c);
                if(a == b && b == c && c == a)
                {
                    printf("The lengths are of a equilateral triangle.\n");
                }
                else
                {
                    printf("The lengths are not the length of a equlateral triangle.\n");
                }
                break;
            case 'd':
                exit(0);
                break;
            default:
                printf("Invalid entry\n");
                break;
        }
    }
    return 0;
}
