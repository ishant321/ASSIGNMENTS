//Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    printf("Size of int is %d byte\n", sizeof(int));
    printf("Size of float is %d byte\n", sizeof(float));
    printf("Size of char is %d byte\n", sizeof(char));
    printf("Size of double is %d byte", sizeof(double));
    return 0;
}