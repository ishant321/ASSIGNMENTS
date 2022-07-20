//Write a program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int a, c, i;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(i=a+1;i>1;i++)
    {
        int  count = 0;
        for(c=1;c<=i;c++)
        {
            if(i%c == 0)
            {
                count ++;
            }
        }
        if(count == 2)
        {
            printf("%d is the next prime number of %d", i, a);
            break;
        }
    }
    return 0;
}