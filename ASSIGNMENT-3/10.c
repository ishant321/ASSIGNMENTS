/*
Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage.
*/

#include<stdio.h>
int main()
{
    float cp, sp, profit, loss;
    printf("Enter the cost price and selling price: ");
    scanf("%d%d", &cp, &sp);
    if(sp>cp)
        {
            profit = ((sp-cp)/cp)*100;
            printf("%f is the profit percentage", profit);
        }
    else if(cp>sp)
        {
            loss = ((cp-sp)/cp)*100;
            printf("%f is the loss percentage", loss);
        }
    else
        printf("No loss and no profit");
    return 0;
}