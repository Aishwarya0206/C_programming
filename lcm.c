#include<stdio.h>
int lcm(int a, int b);
void main()
{
int a,b, lcm1;
printf("Enter two numbers to find lcm: ");
scanf("%d %d",&a,&b);
if(a>b)
lcm1 = lcm(b,a);
else
lcm1 = lcm(a,b);
printf("LCM of %d and %d = %d\n",a,b,lcm1);
}

int lcm(int a, int b)
{
static int mul = 0;
mul+=b;
if((mul%a ==0) && (mul%b==0))
{
return mul;
}
else
{
return lcm(a,b);
}
}
