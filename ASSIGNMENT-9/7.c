/*
Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    float t;
        printf("Enter your electricity unit: \n");
        scanf("%d", &a);
        t = a;
        switch(a)
        {
            case 1 ... 50:
                printf("Your total electricity bill is %f", (t*0.5)*120/100);
                break;
            case 51 ...150:
                printf("Your total electricity bill is %f", ((50*0.5)+(t-50)*0.75)*120/100);
                break;
            case 151 ... 250:
                printf("Your total electricity bill is %f", ((50*0.5)+(100*0.75)+((t-150)*1.2))*120/100);
                break;
            default:
                printf("Your total electricity bill is %f", ((50*0.5)+(100*0.75)+(100*1.2)+((t-250)*1.5))*120/100);
                break;
        }
    return 0;
}

