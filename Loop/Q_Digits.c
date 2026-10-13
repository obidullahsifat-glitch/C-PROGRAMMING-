#include <stdio.h>
int main()
{
 int T;
 int i;
 scanf("%d",&T);
 for(i=1;i<=T;i++)
 {
 
 int N,rem,reverse=0;
 int digit;
 scanf("%d",&N);
 if(N==0)
 {
    printf("%d\n",0);
 }
 else
 {
 while(N!=0)
 {
  rem=N%10;
  digit=rem;
  
   printf("%d ",digit);
   N=N/10;

 }
 printf("\n");

 
}
 }
 




    return 0;
}