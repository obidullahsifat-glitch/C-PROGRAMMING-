#include <stdio.h>
int main()
{

int income,credit_score,existing_loan;
printf("Enter your Income:\n");
scanf("%d",&income);
printf("Enter your credit_score:\n");
scanf("%d",&credit_score);
printf("Existing loan:\nClick 1 for Yes\nClick 0 for No\n");
scanf("%d",&existing_loan);

if(income<0 || credit_score<300 || credit_score>850 || existing_loan<0 || existing_loan>1)
{
printf("Invalid Input\n");
return 0;

}
if(credit_score>=750 && existing_loan==0)
{

printf("Approved with Low Interest\n");
}

else if(credit_score>=700 && credit_score<=749 && income>=50000 && existing_loan==0)
{
printf("Approved with Standard Interest\n");
}

else if(existing_loan==1 && credit_score>=700 && income>=75000)
{

    printf("Approved with High Interest");
}
else{

    printf(" Loan Rejected");
}


return 0;

}





