#include <stdio.h>
int main()

{
float a,b,c,p,q,r;
printf("Enter the value of a,b,c,p,q and r");
scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);

if(a*q!=b*p)
{


float x,y;
x=(c*q-b*r)/(a*q-b*p);
y=(c*p-a*r)/(b*p-a*q);



printf("X= %.2f \n, Y= %.2f ",x,y);
}

else {

    printf("No Solution");
}




return 0;
}
