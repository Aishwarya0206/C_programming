#include<stdio.h>
struct employee
{
	int no, age, ph, sal;
	char name[30], dname[30];
}emp[100];
void main()
{
	int i, n=20;
	clrscr();
	printf("Enter employee info as Number, Name, Department Name, Age, Phone Number, Salary");
	for(i=0; i<n; i++)
	{
		scanf("%d %s %s %d %d %d",&emp[i].no,emp[i].name,emp[i].dname,emp[i].age,emp[i].ph,emp[i].sal);
	}
	printf("\nNumber \tName \tDepartment \tAge \tPhone \tSalary");
	for(i=0; i<n; i++)
	{
		printf("%d\t\t%s\t\t%s\t\t%d\t\t%d\t\t%d\n",emp[i].no,emp[i].name,emp[i].dname,emp[i].age,emp[i].ph,emp[i].sal);
	}
	getch();
}
