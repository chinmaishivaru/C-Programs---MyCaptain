#include <stdio.h>

int lcm(int a, int b)
{
    static int i=1;
    if(i%a==0&&i%b==0)
    return i;
    else
    {
        i=i+1;
        lcm(a,b);
    }
}

int main()
{
    int x,y,a;
    printf("Enter the numbers : ");
    scanf("%d%d",&x,&y);
    a=lcm(x,y);
    printf("The LCM of two numbers is %d",a);
}
