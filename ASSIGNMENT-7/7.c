//Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main()
{
    int i, c, a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a , &b);
    if(a<b)
    {
        for(i=a;i<=b;i++)
      {
        int count = 0;
        for(c=1;c<=i;c++)
        {
            if(i%c == 0)
                count++;
        }
        if(count == 2)
            printf("%d\n", i);
      }
    }
    else
    {
        for(i=b;i<=a;i++)
      {
        int count = 0;
        for(c=1;c<=i;c++)
        {
            if(i%c == 0)
                count++;
        }
        if(count == 2)
            printf("%d\n", i);
      }
    }
    return 0;
}