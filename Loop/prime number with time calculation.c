#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int n;
   int count=0;
   scanf("%d",&n);
   clock_t start,end;
   start=clock();
   if(n==1)
   {
       printf("Not a prime number");


   }
   int i;
   for(i=2;i<=sqrt(n);i++)
   {
      if(n%i==0)
       {
        count=1;
       }
    }

    if(count==1)
    {
        printf("Not a Prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }
    end=clock();
    double total_time=(double)(end-start)/CLOCKS_PER_SEC;
    printf("%lf",total_time);

    return 0;
}
