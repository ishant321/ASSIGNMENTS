/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j>=6-i && j<5+i))
            {
                if(i>5 && j>=i-4 && j<15-i)
                    printf("*");
                else if(i<=5)
                    printf("*");
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}