//Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

void fibo(int x)
{
    int a = 0, b = 1, n = 0, c;
    c = 0;
    printf("%d\n",a);
    printf("%d\n", b);
    while(1)
    {
        printf("%d\n", a+b);
        c = a;
        a = b;
        b = a+c;
        n++;
        if(n == x)
            break;
    }
}