#include <stdio.h>

int main()
{
    int a[3][3],i,j,m=3,n=3,sum=0;
    int *p=&a[3][3];
	printf("Enter the elements of a matrix : ");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",*(*(a+i)+j));
    printf("\nThe matrix is as follows :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",*(*(a+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        if(i==j)
        sum=sum+*(*(a+i)+j);
    }
    printf("Sum of the diagonal elements : %d",sum);
return 0;
}
