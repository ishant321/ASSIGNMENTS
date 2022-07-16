//Write a program which takes the month number as an input and display number of days in that month

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month number(Default - non leap year): ");
    scanf("%d", &a);
    if(a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a== 12)
        printf("The number of days in the month is 31");
    else if (a == 4 || a ==6 || a == 9 || a == 11)
        printf("The number of days in the month is 30");
    else if(a == 2)
        printf("The number of days in the month is 28");
    else
        printf("Invalid Entry");
    return 0;
}