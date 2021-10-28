#include <stdio.h>

int main()
{
int  menu,price,funds,payment,change;

printf("=======================\n");
printf(" 12 Soft Drinkers\n");
printf("=======================\n");

printf("What would you like to order?\n");
printf("[1]Pepsi(100)\n[2]Dr.Pepper(120)\n[3]Coca-Cola(95)\n");
printf("Your Selection:");
scanf("%d",&menu);


switch(menu){
case 1:
price=100;

switch(menu){
case 1:

break;
}
printf("Enter Funds:");
 scanf("%d",&payment);
if(payment>=price){
change= payment - price;
printf("change: %d\n",change);
printf("Enjoy your drinks");
}
else{
printf("Not Enough Funds");
}
break;

case 2:
price=120;


switch(menu){
case 1:

break;
}
printf("Enter Funds:\n");
 scanf("%d",&payment);
if(payment>=price){
change= payment - price;
printf("change: %d\n",change);
printf("Enjoy your drinks");
}
else{
printf("Not Enough Funds");
}
break;

case 3:
price=95;

switch(menu){
case 1:

break;
}
printf("Enter Funds:\n");
 scanf("%d",&payment);
if(payment>=price){
change= payment - price;
printf("change: %d\n",change);
printf("Enjoy your drinks");
}
else{
printf("Not Enough Funds");
}
break;
}
return 0;
}