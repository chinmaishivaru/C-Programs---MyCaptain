#include <stdio.h>

int main()
{
   const int n=6;
   printf("Please brace yourself...\nMay the Byte steps be strong enough to support Ms.GigaByte!\n");
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("01");
        }
        printf("\n");    
    }
    return 0;
}
