//Write a function to print PASCAL Triangle. (TSRN)
/*
      1
     1 1
    1 2 1
   1 3 3 1
*/
#include<stdio.h>
int combination(int, int);
void pascal(int);
int fact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    pascal(n);
    return 0;
}

void pascal(int x)
{
    int i, j, k, l;
    for(i = 1;i<=x; i++)
    {
        k = 1;
        l = 0;
        for(j = 0; j<2*x; j++)
        {
            if(j>=(x+1)-i && j<=(x-1)+i)
            {
                if(k == 1)
                {
                    printf("%d", combination(i-1,l));
                    l++;
                    k++;
                }
                else
                {
                    printf("  ");
                    k--;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

int combination(int x, int y)
{
    if(x == y)
        return 1;
    else if(x == 0)
        return 1;
    else
        return fact(x)/(fact(x-y)*fact(y));
}

int fact(int x)
{
    int i = 1, f = 1;
    while(i<=x)
    {
        f = f*i;
        i++;
    }
    return f;
}