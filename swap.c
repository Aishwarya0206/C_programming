#include<stdio.h>
void main()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
a = a^b;
b = a^b;
a = a^b;
printf("\nNumbers after swapping: %d %d", a,b);
}
