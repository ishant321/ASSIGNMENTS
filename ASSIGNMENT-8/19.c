/*
  *****     *****
 *******   *******
********* *********
******MySirG*******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/

#include<stdio.h>
int main()
{
    int i, j, k = 1;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i == 4)
                {
                    if(j<=6 || j>=13)
                        printf("*");
                    else if(k == 1)
                        {
                        printf("MySirG");
                        k++;
                        }
                }
            else if(i>4)
            {  
                  if(j>=i-3  && j<=23-i && i>=5)
                    printf("*"); 
                else
                    printf(" ");
            }
            else
            {
                    if((j>=4-i && j<7+i)||(j>=14-i && j<16+i))
                        printf("*");
                    else
                        printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

