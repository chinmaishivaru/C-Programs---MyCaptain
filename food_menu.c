#include <stdio.h>

int main()
{
   char option;
   printf("Welcome Mr.Byte!!\nPlease select a number on the menu from 1 to 5 : ");
   scanf("%c",&option);
   switch(option)
   {
        case '1': printf("Food item - Cheeseburger Meal\nPrice - Rs.239\n");
                break;
        case '2': printf("Food item - Burrito Supreme\nPrice - Rs.129\n");
                break;
        case '3': printf("Food item - Hot Pepperoni Pizza\nPrice - Rs.179\n");
                break;
        case '4': printf("Food item - Mota Maharaja Vadapav\nPrice - Rs.99\n");
                break;
        case '5': printf("Food item - Cheese Mexicano Sandwich\nPrice - Rs.149\n");
                break;
        default:printf("Please select a valid number!");
   }
       return 0;
}
