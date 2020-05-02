#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

int choice;

typedef struct bms
{
	int accno;
	char name[20];
	char gen[10];
	int dd,mm,yy;
	char nation[20];
	int balance;
}bank;

void add(bank a[], int n)
{
	system("cls");
	static int i=1;
	int b;
	printf("\n\n\t\tThank you for choosing us!\n\t\tYour Account Number will be %d\n\t\tEnter the details below as follows :",i);
	a[i].accno=i;
	printf("\n\n\t\tEnter the name : ");
	scanf("%s",a[i].name);
	printf("\n\t\tEnter your Gender(M or F) : ");
	scanf("%s",a[i].gen);
	printf("\n\t\tEnter your Country Name : ");
	scanf("%s",a[i].nation);
	printf("\n\t\tEnter your Date of Birth in the format (dd/mm/yy) : ");
	scanf("%d%d%d",&a[i].dd,&a[i].mm,&a[i].yy);
	printf("\n\n\n\t\tSuccessfully created! Congratulations!");
	printf("\n\n\t\tPress 0 to exit and 1 to go to the MENU : ");
			scanf("%d",&b);
			if(b==1)
				menu();
			else if(b==0)
				ex();
			else
			{
				printf("Invalid option.");
				ex();
			}
}

void details(bank a[], int n)
{
	system("cls");
	int s,b;
	printf("Enter your Account Number to get your details : ");
	scanf("%d",&s);
	for(int i=0;i<n;i++)
		if(s==a[i].accno)
		{
			printf("\n\t\tAccount Number : %d",a[i].accno);
			printf("\n\t\tUnique Account Code : MYCAPBLR0000%d",a[i].accno);
			printf("\n\t\tName : %s\n",a[i].name);
			printf("\n\t\tBalance : %d",a[i].balance);
			printf("\n\t\tCountry : %s",a[i].nation);
			printf("\n\t\tDate of Birth : %d/%d/%d",a[i].dd,a[i].mm,a[i].yy);
			printf("\n\t\tGender : %s",a[i].gen);
			printf("\n\n\t\tPress 0 to exit and 1 to go to the MENU : ");
			scanf("%d",&b);
			if(b==1)
				menu();
			else if(b==0)
				ex();
			else
			{
				printf("Invalid option.");
				ex();
			}
		}
}

void with(int no, bank a[], int n)
{
	system("cls");
	int amt;
	for(int i=0;i<n;i++)
		if(no==a[i].accno)
		{
			printf("Enter the amount to be withdrawn : Rs.");
			scanf("%d",&amt);
			if(amt>>a[i].balance)
				{
					printf("Withdrawal denied. Check your balance.\n");
					menu();
				}
				else 
				{
					a[i].balance-=amt;
					printf("\n\n\tWithdrawal successful !\n\t\tRemaining balance : %d",a[i].balance);
					ex();
				}
		}
}

void depo(int no, bank a[], int n)
{
	system("cls");
	float amt;
	for(int i=0;i<n;i++)
		if(no==a[i].accno)
		{
			printf("Enter the amount to be deposited : Rs.");
			scanf("%d",&amt);
			a[i].balance+=amt;
			printf("\n\n\tWithdrawal successful !\n\t\tRemaining balance : %d",a[i].balance);
			ex();
		}
}

void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

void ex()
{
	system("cls");
	printf("Thank you for using our Bank Management System interface!\n");
	printf("Do not be a victim of Cyber-crime. Warning issued in the interest of Govt. of MyCaptain");
	close();
}

void about()
{
	system("cls");
	printf("\n\nThis is a project program developed by Chinmai S Shivaru under the supervision of MyCaptain.\nCopyright(C) under the license 8001-2008 MyCap Documents\n");
	printf("This is a fun program. Please ignore if any mistakes found! :D\n------------------------------------------------------\n------------------------------------------------------\n");
	printf("\nEnter 0 to exit and 1 to go to the MENU\n");
	scanf("%d",&choice);
	if(choice==1)
		menu();
	else if(choice==0)
		ex();
	else
	{
		printf("Invalid choice.");
		ex();
	}
}

void contact()
{
	system("cls");
	printf("\n\nHead Office Address : Maharaj Complex, MyCap Divison, Opposite to IIM Bangalore, Bangalore - 560 045");
	printf("\nContact Details : +91 8555607986\nContact hours : Mon-Fri 10:00 am to 7:00pm\nWeekends Holiday");
	printf("\nEnter 0 to exit and 1 to go to the MENU\n");
	scanf("%d",&choice);
	if(choice==1)
		menu();
	else ex();
}

void trans(bank a[], int n)
{
	system("cls");
	int m,c;
	printf("\n\n\tSelect Account Number : ");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		if(m==a[i].accno)
		{
			system("cls");
			printf("\n\t\tPress 1 for Withdrawal\n\t\tPress 2 for Deposit\n\n\t\tPress 0 to exit");
			scanf("%d",&c);
			switch(c)
			{
				case '0': ex();
							break;
				case '1': with(m,a,50);
							break;
				case '2': depo(m,a,50);
							break;
				default: printf("Invalid options.\n");
    						ex();
			}
		}
	}

}
void menu(bank a[])
{
    system("cls");
	int select;
    printf("\n\t\t\tWelcome to the MyCaptain Bank\n\n");
    printf("\t1.Transactions\n\t2.Account Details\n\t3.Add new account\n\t4.About us\n\t5.Contact Us\n\nPress anything else to Exit\n\n");
    printf("Enter your choice : ");
    scanf("%d",&select);
    switch(select)
    {
    	case '1': trans(a,50);
    				break;
    	case '2': details(a,50);
    				break;
    	case '3': add(a,50);
    				break;
    	case '4': about();
    				break;
    	case '5': contact();
    				break;
    	default: 	{
						printf("Invalid options.\n");
						ex();
						break;
					}
	}
}

int main()
{
	int i,r;
	struct bms a[50];
	char pass[15],password[15]="chinmaiss";
	system("cls");
	printf("Enter the Login Password : ");
	scanf("%s^\n",pass);
	r=strcmp(pass, password);
	if(r==0)
		{
			printf("Password verified successfully!\n");
			printf("Redirecting to our portal...");
			printf("Loading");
			for(i=0;i<5;i++)
			{
				fordelay(1000);
				printf(".");
			}
			menu(a);
		}
		else 
			{
				printf("Password entered is incorrect\n");
				printf("\nEnter 0 to exit and 1 to retry\n");
				scanf("%d",&choice);
				if(choice==1)
				main();
				else ex();
			}
return 0;
}
