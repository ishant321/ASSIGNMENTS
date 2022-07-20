/*
1234321
123 321
12   21
1     1
*/

#include<stdio.h>
int main()
{
    int i, j, k, t, count;
    for(i=1;i<=4;i++)
    {
        k = 1;
        count = 1;
        for(j=1;j<=7;j++)
        {
            if(j>=6-i && j<=2+i)
            {
                printf(" ");
                if(count == 1)
                {
                    k--;
                    count++;
                }
            }
            else
            {
                printf("%d", k);
                if(j>=4)
                    k--;
                else
                    k++;
            }
        }
        printf("\n");
    }
    return 0;
}