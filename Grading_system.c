#include<stdio.h>
int main()
{
float marks; //Marks is assigned to float
printf("Enter the marks of the kid\n"); //Instructing the user to enter the marks
scanf("%f",&marks); //Reading the marks
if(marks>=85&&marks<=100) //Condition for A grade
printf("Grade A"); //Printing the result for A grade
else if(marks>=70&&marks<=84) //Condition for B grade
printf("Grade B"); //Printing the result for B grade
else if(marks>=55&&marks<=69) //Condition for C grade
printf("Grade C"); //Printing the result for C grade
else if(marks>=40&&marks<=54) //Condition for D grade
printf("Grade D"); //Printing the result for D grade
else if(marks>=0&&marks<40) //Condition for F grade
printf("Grade F"); //Printing the result for F grade
else printf("Invalid marks entered\n"); //Display for marks entered out of range
return(0);
}
