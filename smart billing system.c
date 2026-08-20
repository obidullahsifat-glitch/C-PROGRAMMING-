#include <stdio.h>
int main()
{
int amount,age,membership;
float total_bill;
printf("Enter your amount");
scanf("%d",&amount);
printf("Enter your age");
scanf("%d",&age);
printf("Enter your Membership:\n1 for Regular\n2 for VIP\n3 for VVIP");
scanf("%d",&membership);
if(amount<0 || age<0 || membership<1 || membership>3)
{
printf("Invalid Input");
return 0;
}
if(membership==1)
{
if(age>=60)
{
 total_bill=amount-amount*0.2;

}
else{
total_bill=amount;

}

}
else if(membership==2)
{
if(age>=60)
{
total_bill=amount-amount*0.2;


}
else{
total_bill=amount-amount*0.15;

}
}
else
{
total_bill=amount-amount*0.25;

}

if(total_bill>500)
{

    total_bill=total_bill-(total_bill)*0.05;

}
printf("Your total bill is=%.2f\n",total_bill);

return 0;


}
