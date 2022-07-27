//Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}

void prime(int x)
{
    int i, count, j, n = 0;
    for(j = 1; ; j++)
    {
        i = 1;
        count = 0;
        while(i<=j)
        {
            if(j%i == 0)
                count++;
            i++;
        }
        if(count == 2)
            {
                printf("%d\n", j);
                n++;
            }
        if(n == x)
            break;
    }
    
}