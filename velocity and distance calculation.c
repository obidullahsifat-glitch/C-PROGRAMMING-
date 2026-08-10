#include <stdio.h>
int main()
{
    //velocity calculation

int u=1,f=2,t1=0;
 int v1=u+f*t1;

printf("v1=1 , when t1=0 : *\n");

 int t2=1;
 int v2=u+f*t2;
  printf("v2=3 , when t2=1 : ***\n");

  int t3=2;
  int v3=u+f*t3;
  printf("v3=5 , when t3=2 : *****\n");

  int t4=3;
  int v4=u+f*t4;
  printf("v4=7 , when t4=3 : *******\n\n\n");

  //distance calculation





  int s1=u*t1+0.5*f*t1*t1;
  printf("s1=0 , when t=0 : \n");

  int s2=u*t2+0.5*f*t2*t2;
  printf("s2=2 , when t2=1 : **\n");

  int s3=u*t3+0.5*f*t3*t3;
  printf("s3=6 , when t3=2 : ******\n");

  int s4=u*t4+0.5*f*t4*t4;
  printf("s4=12 , when t4=3 : ************\n");


 return 0;







}
