/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char x;
    int m, n;
    while(1)
    {
        printf("\na. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\nEnter your choice: ");
        fflush(stdin);
        scanf("%c", &x);
        switch(x)
        {
            case 'a':
                printf("Enter two numbers for addition: ");
                scanf("%d%d",&m,&n);
                printf("The sum is %d\n", m+n);
                break;
            case 'b':
                printf("Enter two numbers for subraction: ");
                scanf("%d%d",&m,&n);
                printf("The subraction is %d\n", m-n);
                break;
            case 'c':
                printf("Enter two numbers for multiplication: ");
                scanf("%d%d",&m,&n);
                printf("The multiplication is %d\n", m*n);
                break;
            case 'd':
                printf("Enter two numbers for division: ");
                scanf("%d%d",&m,&n);
                printf("The division is %d\n", m/n);
                break;
            case 'e':
                exit(0);
            default:
                printf(" Invalid entry\n");
                break;
        }
        
    }  
    return 0;
}