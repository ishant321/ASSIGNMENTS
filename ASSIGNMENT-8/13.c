/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/

#include<stdio.h>
int main()
{
    int i, j, k, t, count;
    for(i=1;i<=7;i++)
    {
        k = 'A';
        count = 1;
        for(j=1;j<=13;j++)
        {
            if(j>=9-i && j<=5+i)
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
                printf("%c", k);
                if(j>=7)
                    k--;
                else
                    k++;
            }
        }
        printf("\n");
    }
    return 0;
}