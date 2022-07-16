/*WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given format.

Expected output format – “Area of circle is A having the radius R”. Replace A with area 
& R with radius.
*/


#include<stdio.h>
int main()
{
    float a, r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    a = (22*r*r)/7;
    printf("Area of the circle is %f having the radius %f", a, r);
    return 0;

}