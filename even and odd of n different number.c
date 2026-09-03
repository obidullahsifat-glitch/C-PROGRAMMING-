#include <stdio.h>
int main()
{
 int counteven=0;
 int countodd=0;
 printf("Enter your number");
 for(int i=1;i<=5;i++)
 {
     int x;
     scanf("%d",&x);
     if(x%2==0)
     {
         counteven++;
     }
     else{
        countodd++;
     }
 }
 printf("Total even number=%d\nTotal odd number=%d",counteven,countodd);




    return 0;
}
