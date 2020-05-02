#include<stdio.h>
int main()
{
int a,b; //Declaration of variables
printf("ENTER TWO NUMBERS A AND B\n"); //Statement for users to enter two numbers
scanf("%d%d",&a,&b); //Reading the values of a and b
printf("Before swapping A=%d and B=%d\n",a,b); //Initial values displayed
a=a+b;
b=a-b;
a=a-b; //Operations to swap numbers
printf("After swapping A=%d and B=%d\n",a,b); //Final values after swapping a and b
return(0);
}
