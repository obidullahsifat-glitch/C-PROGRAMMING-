#include <stdio.h>
 
int main() {
    int X,Y;
    int sum=0;
    scanf("%d",&X);
     scanf("%d",&Y);
     int i;
     if(X>Y)
     {
         for(i=Y+1;i<X;i++)
         {
             if(i%2!=0)
             {
                 sum=sum+i;
             }
         }
         printf("%d",sum);
     }
     
     else
     {
         for(i=X+1;i<Y;i++)
         {
             if(i%2!=0)
             {
                 sum=sum+i;
             }
         }
         printf("%d",sum);
     }
    return 0;
}