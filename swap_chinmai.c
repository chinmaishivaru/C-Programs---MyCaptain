#include<stdio.h>
int main()
{
int a,b;
printf("ENTER TWO NUMBERS A AND B\n");
scanf("%d%d",&a,&b);
printf("Before swapping A=%d and B=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping A=%d and B=%d\n",a,b);
return(0);
}
