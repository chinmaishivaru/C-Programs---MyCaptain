#include<stdio.h>
#include<windows.h>

struct player
{
     char name[20];
	 char team[20];
     int runs;
};

int main()
{
	int i,s1=0,s2=0,m,n,overs;
    struct player a[11];
	struct player b[11];
	struct player c,d;
	printf("Enter the number of overs : ");
	scanf("%d",&overs);
	printf("Enter the name of Team-1 : ");
	scanf("%s",c.team);
	printf("\nEnter the name of Team-2 : ");
	scanf("%s",d.team);
	printf("\nEnter the No.of wickets of Team-1 : ");
	scanf("%d",&m);
	printf("\nEnter the No.of wickets of Team-2 : ");
	scanf("%d",&n);
	system("cls");
	printf("\t\t\t\t%s\n",c.team);
    printf("\tName of Player   Runs Scored \n");
    printf("---------------------------------------------\n\t");
    for(i=0;i<=m;i++)
    {
         scanf("%s",a[i].name);
         printf("\t\t");
		 scanf("%d",&a[i].runs);
         printf("\t");
    }
    for(i=0;i<=m;i++)
         s1=s1+a[i].runs;
    printf("\n---------------------------------------------\n");
    printf("Total Runs Scored by Team-1: %d",s1);
	printf("\t\t\n\n%s\n",d.team);
    printf("\tName of Player   Runs Scored \n");
    printf("---------------------------------------------\n\t");
    for(i=0;i<=n;i++)
    {
         scanf("%s",b[i].name);
		 printf("\t\t");
         scanf("%d",&b[i].runs);
         printf("\t");
    }
    for(i=0;i<=n;i++)
         s2=s2+b[i].runs;
    printf("\n---------------------------------------------\n");
    printf("Total Runs Scored by Team-2: %d\n",s2);
	if(s1>s2)
		printf("\n\t\t%s beat %s by %d runs\n\n",c.team,d.team,s1-s2);
		else if(s2>s1)
			printf("\n\t\t%s beat %s by %d runs\n\n",d.team,c.team,s2-s1);
			else printf("\n\t\tThe match is drawn and scores are equal\n\n");
	return 0;
}
