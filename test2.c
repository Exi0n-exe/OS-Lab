//write a c program to add 2 numbers
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum of %d and %d is %d \n",a,b,c);
}