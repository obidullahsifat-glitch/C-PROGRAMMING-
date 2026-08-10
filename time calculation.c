#include <stdio.h>
int main()
{
    //hours to seconds

int h;
printf("Enter the time in hours");
scanf("%d",&h);
 int s1=h*3600;
  printf("%d seconds\n",s1);

    //minutes to seconds

  int m;
  printf("Enter the time in minutes");
  scanf("%d",&m);
   int s2=m*60;
   printf("%d seconds\n",s2);

     //seconds to seconds

   int s;
   printf("Enter the time in seconds");
   scanf("%d",&s);

   int s3=s;
   printf("%d seconds\n",s3);

  //seconds to hours

   float seconds1;
   printf("Enter the time in seconds");
   scanf("%f",&seconds1);
   float hours=seconds1/3600;
   printf("%.2f hours\n",hours);

   //seconds to minutes

   float seconds2;
   printf("Enter the time in seconds");
   scanf("%f",&seconds2);
   float minutes=seconds2/60;
   printf("%.2f minutes\n",minutes);

   //seconds to seconds

   float seconds3;
   printf("Enter the time in seconds");
   scanf("%f",&seconds3);
   float seconds=seconds3;
   printf("%.2f seconds\n",seconds);





  return 0;





}
