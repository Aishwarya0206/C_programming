#include<stdio.h>
void main(){
printf("Pick an item : \n1. Pizza, Rs. 239\n2. Burger, Rs. 129\n3. Pasta, Rs. 179\n4. French Fries, Rs. 99\n5. Sandwich, Rs.149");
int choice = 0;
printf("\nYour choice please: ");
scanf("%d", &choice);
switch(choice)
{
 case 1: 
 printf("Food item : Pizza\nPrice : Rs. 239");
 break;
 case 2:
 printf("Food item : Burger\nPrice : Rs.129\n");
 break;
 case 3:
 printf("Food item : Pasta\nPrice : Rs. 179\n");
 break;
 case 4: 
 printf("Food item: French Fries\nPrice : Rs. 99\n");
 break;
 case 5:
 printf("Food item: Sandwich\nPrice : Rs.149\n");
 break;
 default:
 printf("Invalid choice\n");
}
}

