#include<stdio.h>
int sum_of_digit_recursion(int n)
{
if(n==0)
{
return 0;
}
return(n%10 + sum_of_digit_recursion(n/10));
}

void main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
printf("Sum of digits in %d is %d\n",num,sum_of_digit_recursion(num));
}

