//Write a program which takes the day number of a week and displays a unique greeting message for the day

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    while(1)
    {
        printf("Enter the day number(Enter 0 to exit): \n");
        scanf("%d", &a);
        switch(a)
        {
            case 1:
                printf("Hey..Today is Monday.Have a great day.\n");
                break;
            case 2:
                printf("Hey..Today is Tuesday.Enjoy the rainy day.\n");
                break;
            case 3:
                printf("Hey..Today is Wednesday.Get going as always.\n");
                break;
            case 4:
                printf("Hey..Today is Thursday.wishing you to have a healthy day.\n");
                break;
            case 5:
                printf("Hey..Today is Friday.keep moving forward.\n");
                break;
            case 6:
                printf("Hey..Today is Saturday.Enjoy the weekend.\n");
                break;
            case 7:
                printf("Hey..Today is Sunday.Enjoy the fun day.\n");
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Invalid entry\n");
                break;
        }
    }
    return 0;
}
