//Write a program to print all Prime numbers under 100

#include<stdio.h>
int main()
{
    int i, c;
    for(i=1;i<=100;i++)
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
    return 0;
}