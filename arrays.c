#include<stdio.h>
void main()
{
int num[3][3];
int c=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("element [%d], [%d]: ",i,j);
scanf("%d",&num[i][j]);
}
}
printf("\nThe matrix is: ");
for(int i=0;i<3;i++)
{
printf("\n");
for(int j=0;j<3;j++)
{
printf("%d\t",num[i][j]);
if(i==j){
c+=num[i][j];
}
}
}
printf("\n\n");
printf("%d\n",c);
}
