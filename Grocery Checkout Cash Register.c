#include <stdio.h>
int main()
{

float price;
float total_bill=0.00;
printf("Enter your Grocery price");
while(1)
{

scanf("%f",&price);
if(price==-1)
{
printf("Invalid price");
break;

return 0;
}

else if(price<-1)
{

printf("Enter the price again\n");
continue;


}






else{

total_bill=price+price*0.05;



printf("Your total bill=%.2f\n",total_bill);
break;
}


}


return 0;
}
