#include <stdio.h>
int main()
{
    float total_fee1=2.00;
    float total_fee2=5.00;
    float total_fee3=10.00;

    printf("1.Click: 1 for your motorbike \n");     //1 for Motorbike
    printf("2.Click: 2 for your car/SUV \n");           //2 for Car
    printf("3.Click: 3 for your bus/truck \n");           //3 for Bus/truck


    int vehicle_code;
    scanf("%d",&vehicle_code);

    printf("Click : 1 if you are a Local residents\n");    //1 for Local residents
    printf("Click : 0 if you are a Regular\n");            //0 for Regular

    int pass_status;
    scanf("%d",&pass_status);
    printf("Enter your travel time");
    int hours_of_travel;

    scanf("%d",&hours_of_travel);
    if(vehicle_code==1 && pass_status==0 && hours_of_travel>=0 && hours_of_travel <=6 ||  hours_of_travel >=10 && hours_of_travel <=16 || hours_of_travel>=20 && hours_of_travel<=23)

   {
    printf("Total toll fee = %.2f $\n",total_fee1);
   }

    else if(vehicle_code==2 && pass_status==0 && hours_of_travel>=0 && hours_of_travel <=6 ||  hours_of_travel >=10 && hours_of_travel <=16 || hours_of_travel>=20 && hours_of_travel<=23)
   {
    printf("Total toll fee = %.2f $",total_fee2);
   }
    else if(vehicle_code==3 && pass_status==0 && hours_of_travel>=0 && hours_of_travel <=6 ||  hours_of_travel >=10 && hours_of_travel <=16 || hours_of_travel>=20 && hours_of_travel<=23)
   {
    printf("Total toll fee = %.2f $\n",total_fee3);
   }


    else if(vehicle_code==1 && pass_status==0 && hours_of_travel >=7 && hours_of_travel <=9 || hours_of_travel >=17 && hours_of_travel <=19)
   {
    float total_fee4=total_fee1 + total_fee1*0.2;
    printf("Total toll fee = %.2f $\n",total_fee4);
   }
    else if(vehicle_code==2 && pass_status==0 && hours_of_travel >=7 && hours_of_travel <=9 || hours_of_travel >=17 && hours_of_travel <=19)
   {
    float total_fee5=total_fee2 + total_fee2*0.2;
    printf("Total toll fee = %.2f $\n",total_fee5);
   }

    else if(vehicle_code==3 && pass_status==0 && hours_of_travel >=7 && hours_of_travel <=9 || hours_of_travel >=17 && hours_of_travel <=19)

   {
    float total_fee6=total_fee3 + total_fee3*0.2;               //Peak hours(7-9 am or 5-7 pm)

    printf("Total toll fee = %.2f $\n",total_fee6);             //I add the peak hour in (hours_of_travel) variable
   }



    else if(vehicle_code==1 && pass_status==1 && hours_of_travel >=7 && hours_of_travel <=9 || hours_of_travel >=17 && hours_of_travel <=19)
   {
    float total_fee7=total_fee1 + total_fee1*0.2-(total_fee1 + total_fee1*0.2)*0.5;
    printf("Total toll fee = %.2f $\n",total_fee7);
   }
    else if(vehicle_code==2 && pass_status==1 && hours_of_travel >=7 && hours_of_travel <=9 || hours_of_travel >=17 && hours_of_travel <=19)
   {
    float total_fee8=total_fee2 + total_fee2*0.2-(total_fee2 + total_fee2*0.2)*0.5;
    printf("Total toll fee = %.2f $\n",total_fee8);
  }

    else if(vehicle_code==3 && pass_status==1 && hours_of_travel >=7 && hours_of_travel <=9 || hours_of_travel >=17 && hours_of_travel <=19)
  {
    float total_fee9=total_fee3 + total_fee3*0.2-(total_fee3 + total_fee3*0.2)*0.5;
    printf("Total toll fee = %.2f $\n",total_fee9);

  }

    else if(vehicle_code==1 && pass_status==1 && hours_of_travel>=0 && hours_of_travel <=6 ||  hours_of_travel >=10 && hours_of_travel <=16 || hours_of_travel>=20 && hours_of_travel<=23)

  {

    float total_fee10=total_fee1-total_fee1*0.5;
    printf("Total toll fee = %.2f $\n",total_fee10);

  }
    else if(vehicle_code==2 && pass_status==1 && hours_of_travel>=0 && hours_of_travel <=6 ||  hours_of_travel >=10 && hours_of_travel <=16 || hours_of_travel>=20 && hours_of_travel<=23)
  {

    float total_fee11=total_fee2-total_fee2*0.5;
    printf("Total toll fee = %.2f $\n",total_fee11);

  }
    else if(vehicle_code==3 && pass_status==1 && hours_of_travel>=0 && hours_of_travel <=6 ||  hours_of_travel >=10 && hours_of_travel <=16 || hours_of_travel>=20 && hours_of_travel<= 23)

  {

    float total_fee12=total_fee3-total_fee3*0.5;
    printf("Total toll fee = %.2f $\n",total_fee12);

  }


    else
  {
    printf("Invalid code");
  }

 return 0;

  }
