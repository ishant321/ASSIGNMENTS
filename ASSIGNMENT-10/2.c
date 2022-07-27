// Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
float SI(float, float, float);
int main()
{
    float p, t, r, si;
    printf("Enter principle, time and rate of interest: ");
    scanf("%f%f%f", &p, &t, &r);
    si = SI(p, t, r);
    printf("Simple interest is %f", si);
    return 0;
}

float SI(float x, float y ,float z)
{
    return (x*y*z)/100;
}
