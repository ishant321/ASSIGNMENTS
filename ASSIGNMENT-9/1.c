//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month number: ");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
            printf("The month is January and number of days in this month is 31");
            break;
        case 2:
            printf("The month is Februrary and number of days in this month is 28");
            break;
        case 3:
            printf("The month is March and number of days in this month is 31");
            break;
        case 4:
            printf("The month is April and number of days in this month is 30");
            break;
        case 5:
            printf("The month is May and number of days in this month is 31");
            break;
        case 6:
            printf("The month is June and number of days in this month is 30");
            break;
        case 7:
            printf("The month is July and number of days in this month is 31");
            break;
        case 8:
            printf("The month is August and number of days in this month is 31");
            break;
        case 9:
            printf("The month is September and number of days in this month is 30");
            break;
        case 10:
            printf("The month is October and number of days in this month is 31");
            break;
        case 11:
            printf("The month is November and number of days in this month is 30");
            break;
        case 12:
            printf("The month is December and number of days in this month is 31");
            break;
        default:
            printf("Invalid entry");
    }
    return 0;
}
