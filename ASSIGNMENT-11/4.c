//Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>
int prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is the next prime number of %d", prime(n), n);
}

int prime(int x)
{
    int i , j , count;
    for(i = x+1; ; i++)
    {
        count = 0;
        j = 1;
        while(j<=i)
        {
            if(i%j == 0)
                count ++;
            j++;
        }
        if(count == 2)
            return i;
    }
}