//Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);
    switch(n%100)
    {
        case 0:
            switch (n%400)
            {
                case 0:
                    printf("Leap Year");
                    break;
                default: 
                    printf("Non-Leap Year");
                    break;
            }
            break;
        default:
            switch(n%4)
            {
                case 0:
                    printf("Leap Year");
                    break;
                default: 
                    printf("Non-Leap Year");
                    break;
            }
            break;
    }
    return 0;
}
