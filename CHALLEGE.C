#include<stdio.h>
#include<conio.h>
void main()
{
int m, avg, i, t=0;
for(i=1; i<=5; i++)
{
printf("Enter marks of m{%d}: ",i);
scanf("%d",&m);
t = t+m;
}
printf("Total marks: %d",t);
avg = t/5;
printf("\nAverage: %d",avg);
if(avg>=85)
printf("\nGrade A");
else if(avg>=70)
printf("\nGrade B");
else if(avg>=55)
printf("\nGrade C");
else if(avg>=40)
printf("\nGrade D");
else
printf("\nGrade F");
getch();
}