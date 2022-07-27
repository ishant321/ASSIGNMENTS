/*
Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid")
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
        printf("Enter a number among 1, 2 and 3: \n");
        scanf("%d", &a);
        switch(a)
        {
            case 1:
                printf("Good\n");
                break;
            case 2:
                printf("Better\n");
                break;
            case 3:
                printf("Best\n");
                break;
            default:
                printf("Invalid\n");
                break;
        }
    return 0;
}
