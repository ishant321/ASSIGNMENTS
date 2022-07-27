//Write a function to print first N natural numbers (TSRN)

#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    natural(n);
    return 0;
}

void natural(int x)
{
    int i = 1;
    while(i<=x)
    {
        printf("%d\n", i);
        i++;
    }
}