#include <stdio.h>

int sum(int x)
{
    int rem;
    if((x/10)!=0)
    {
        rem=x%10;
        x/=10;
        return(rem+sum(x));
    }
    else return x;
}

int main()
{
   int num;
   printf("Enter the number : ");
   scanf("%d",&num);
   printf("Sum of the digits of the number %d is %d",num,sum(num));
       return 0;
}
