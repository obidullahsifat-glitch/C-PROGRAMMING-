#include <stdio.h>
int main()
{
    int total_fee1=200;
    float total_fee2=550.00;
    float total_fee3=750.00;

    printf("1.Click 1 for your motorbike\n");     //1 for Motorbike

    printf("2.Click 2 for your car\n");           //2 for Car

    printf("3.Click 3 for your bus\n");           //3 for Bus

    printf("4.Click 4 for your truck\n");         //4 for Truck

    int vehicle_code;
    scanf("%d",&vehicle_code);

    printf("Click : 1 if you are a Local residents\n");    //1 for Local residents
    printf("Click : 0 if you are a Regular\n");            //0 for Regular

    int past_status;
    scanf("%d",&past_status);
    printf("Enter your travel time");
    int hours_of_travel;

    scanf("%d",&hours_of_travel);

    if(vehicle_code==1 && past_status==0 && 0<= hours_of_travel <=6 && 10<= hours_of_travel <=16 && 20<= hours_of_travel <=23)

{

    printf("Total toll fee = %d taka\n",total_fee1);

}

    else if(vehicle_code==2 && past_status==0 && 0<= hours_of_travel <=6 && 10<= hours_of_travel <=16 && 20<= hours_of_travel <=23)

{
    printf("Total toll fee = %.2f taka",total_fee2);

}

    else if(vehicle_code==3 && past_status==0 && 0<= hours_of_travel <=6 && 10<= hours_of_travel <=16 && 20<= hours_of_travel <=23)

{

    printf("Total toll fee = %.2f taka\n",total_fee3);

}


    else if(vehicle_code==4 && past_status==0 && 0<= hours_of_travel <=6 && 10<= hours_of_travel <=16 && 20<= hours_of_travel <=23)

{

    printf("Total toll fee = %.2f\n",total_fee3);

}
    else if(vehicle_code==1 && past_status==0 && 7<= hours_of_travel <=9 && 17<= hours_of_travel<=19)
{

    int total_fee4=total_fee1 + total_fee1*0.2;

    printf("Total toll fee = %d taka\n",total_fee4);

}


 else if(vehicle_code==2 && past_status==0 && 7<= hours_of_travel <=9 && 17<= hours_of_travel<=19)

{

    float total_fee5=total_fee2 + total_fee2*0.2;

    printf("Total toll fee = %.2f taka\n",total_fee5);

}

    else if(vehicle_code==3 && past_status==0 && 7<= hours_of_travel <=9 && 17<= hours_of_travel<=19)



{

    int total_fee6=total_fee3 + total_fee3*0.2;

    printf("Total toll fee = %.2f taka\n",total_fee6);

}

    else if(vehicle_code==4 && past_status==0 && 7<= hours_of_travel <=9 && 17<= hours_of_travel<=19)


{

    int total_fee7=total_fee3 + total_fee3*0.2;

    printf("Total toll fee = %.2f taka\n",total_fee7);

}

    else if(vehicle_code==1 && past_status==1 && 7<= hours_of_travel <=9 && 17<= hours_of_travel<=19)

{


    int total_fee8=total_fee1 + total_fee1*0.2-total_fee1*0.5;

    printf("Total toll fee = %d taka\n",total_fee8);

}

    else if(vehicle_code==2 && past_status==1 && 7<= hours_of_travel <=9 && 17<= hours_of_travel<=19)


{
    float total_fee9=total_fee2 + total_fee2*0.2-total_fee2*0.5;

    printf("Total toll fee = %.2f taka\n",total_fee9);

}

    else if(vehicle_code==3 && past_status==1 && 7<= hours_of_travel <=9 && 17<= hours_of_travel<=19)


{
    float total_fee10=total_fee3 + total_fee3*0.2-total_fee3*0.5;

    printf("Total toll fee = %.2f taka\n",total_fee10);

}
    else if(vehicle_code==4 && past_status==1 && 7<= hours_of_travel <=9 && 17<= hours_of_travel<=19)



{
    float total_fee11=total_fee3 + total_fee3*0.2-total_fee3*0.5;

    printf("Total toll fee = %.2f taka\n",total_fee11);

}


    else if(vehicle_code==1 && past_status==1 && 0<= hours_of_travel <=6 && 10<= hours_of_travel <=16 && 20<= hours_of_travel <=23)

{

    int total_fee12=total_fee1-total_fee1*0.5;

    printf("Total toll fee = %d taka\n",total_fee12);

}

    else if(vehicle_code==2 && past_status==1 && 0<= hours_of_travel <=6 && 10<= hours_of_travel <=16 && 20<= hours_of_travel <=23)

{

    float total_fee13=total_fee2-total_fee2*0.5;

    printf("Total toll fee = %.2f taka\n",total_fee13);

}


    else if(vehicle_code==3 && past_status==1 && 0<= hours_of_travel <=6 && 10<= hours_of_travel <=16 && 20<= hours_of_travel <=23)

{

    float total_fee14=total_fee3-total_fee3*0.5;

    printf("Total toll fee = %.2f taka\n",total_fee14);

}

    else if(vehicle_code==4 && past_status==1 && 0<= hours_of_travel <=6 && 10<= hours_of_travel <=16 && 20<= hours_of_travel <=23)

{

    float total_fee15=total_fee3-total_fee3*0.5;

    printf("Total toll fee = %.2f taka\n",total_fee15);

}

else{

    printf("Invalid code");
}


return 0;


}
