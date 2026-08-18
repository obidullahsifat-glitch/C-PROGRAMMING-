#include <stdio.h>



  int option;




  float initial_balance=500.00;
  float deposit;
  int main()
{
printf("Press 1 for Check Balance\nPress 2 for Deposit\nPress 3 for Withdraw\nPress 4 for Exit");

scanf("%d",&option);


  if(option==1){

  printf("Current Balance=%0.2f $\n",initial_balance);
}


  else if(option==2)
{
  printf("Enter your deposit amount");
  scanf("%f",&deposit);


  if(deposit>0){

  float current_balance1=initial_balance+deposit;
  printf("So,Now total balance is=%0.2f $\n",current_balance1);

}

 else{

  printf("Invalid Amount");
}



}


  else if(option==3)

    {
  printf("Enter your withdrawal balance");
  float withdrawal_amount;
  scanf("%f",&withdrawal_amount);

if(withdrawal_amount<=0){

    printf("Invalid amount\n");
}

  else if(withdrawal_amount<=initial_balance)
        {

  float current_balance2=(initial_balance)-withdrawal_amount;
  printf("So,Now total balance is=%0.2f $\n",current_balance2);
  }

  else{
  printf("Insufficient Funds");
     }


}


  else if(option==4){
  printf("Thank you");
}


  else
{
  printf("Invalid Menu option");

}
  return 0;

}
