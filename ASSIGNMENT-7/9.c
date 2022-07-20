//Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
int main()
{
    int a, d=0, i=1,sum = 0, c, n=0, k, m;
    printf("Enter a number: ");
    scanf("%d", &a);
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
      printf("%d is an Armstrong Number", k);
    else
      printf("%d is not an Armstrong Number", k);
    return 0;
}
