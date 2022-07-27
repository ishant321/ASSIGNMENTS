//Write a function to check whether a given number contains a given digit or not.(TSRS)

#include<stdio.h>
char check(int,int);
int main()
{
    int n, a;
    printf("Enter a number and a digit: ");
    scanf("%d%d", &n,&a);
    printf("%c", check(n,a));
    return 0;
}

char check(int x, int y)
{
    int c=y, flag = 0, Z = 0;
    while(x!=0)
    {
        y = c;
        Z = x%10;
        if(Z == y)
        {
            flag == 1;
            return 'y';
        }
        x = x/10;
    }
    if(flag == 0)
        return 'n';
}
