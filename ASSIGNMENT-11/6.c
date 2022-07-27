//Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>
void prime(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    prime(a, b);
    return 0;
}

void prime(int x, int y)
{
    int i, count, j, n = 0;
    for(j = x+1;j<=y; j++)
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
        
    }
    
}