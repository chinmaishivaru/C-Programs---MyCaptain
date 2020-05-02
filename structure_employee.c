#include <stdio.h>

typedef struct employee
{
  int empno;
  char empname[25];
  char department[20];
  float salary;
}emp;

void print(emp k[20])
{
    for(int i=0;i<20;i++)
    {
        printf("Employee Number: %d\n",k[i].empno);
        printf("Employee Name: %s\n",k[i].empname);
        printf("Department: %s\n",k[i].department);
        printf("Salary: %f\n",k[i].salary);
    }
}

int main()
{
    emp a[20];
    printf("Enter the details of employees\n");
    for(int i=0;i<20;i++)
    {
        printf("Employee Number : ");
        scanf("%d",&a[i].empno);
        printf("\nEmployee Name : ");
        scanf("%s",a[i].empname);
        printf("\nDepartment : ");
        scanf("%s",a[i].department);
        printf("\nSalary : ");
        scanf("%f\n",&a[i].salary);
    }
    print(a);
}
