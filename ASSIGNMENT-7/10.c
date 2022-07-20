//Write a program to print all Armstrong numbers under 100

#include<stdio.h>
int main()
{
    int a = 1, d, i,sum, c, n, k, m, t = 1;
    while(t<=1000)
    {
        d=0;
        i=1;
        sum = 0;
        n=0;
        a = t;
        c = a;
        k = a;
            while(a!=0)
            {
                a = a/10;
                n++;
            }
            m = n;
            while(c!=0)
            {
                i =1;
                n = m;
                d = c%10;
                    while(n!=0)
                    {

                        i = d*i;
                        n--;
                    }
                sum = sum + i;
                c = c/10;
            }
        if(k == sum)
        {
            printf("%d\n", k);
        }
        t++;
    }
    return 0;
}
