#include<stdio.h>

typedef struct employee
{
	int empno;
	char empname[20];
	char dept[20];
	float sal;
}emp;

void input(emp a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter the details of Employee %d\nEnter Employee number : ",i+1);
		scanf("%d",&a[i].empno);
		printf("\nEmployee name : ");
		scanf("%s",a[i].empname);
		printf("\nDepartment : ");
		scanf("%s",a[i].dept);
		printf("\nSalary of the employee : ");
		scanf("%f",&a[i].sal);
	} 
}

void output(emp a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("The details of employee %d is as follows : \n",i+1);
		printf("Employee number : %d\nEmployee name : %s\nDepartment : %s\nSalary of the employee : %f\n\n",a[i].empno,a[i].empname,a[i].dept,&a[i].sal);
	}
}

int main()
{
	emp e[20];
	input(e,20);
	output(e,20);
return 0;
}
