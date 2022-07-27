/*Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/

#include<stdio.h>
void pfact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d ",&n);
    pfact(n);
    return 0;
}

void pfact(int x)
{
    int i = 1 , k, t;
    while(i<=x)
    {
        k = 1;
        t = 0;
        if(x%i == 0)
        {
            while(k<=i)
            {
                if(i%k == 0)
                    t++;
                k++;
            }
            if(t == 2)
            {
                printf("%d", i);
                x = x/i;
                i = 1;
                
            }
        }
        i++;
    }
}