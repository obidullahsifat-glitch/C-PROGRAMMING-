#include <stdio.h>
 
int main() {
 
int N;
int in=0,out=0;
int i,j;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    int X;
    scanf("%d",&X);
    
        
         if(X<10 || X>20)
        {
            out++;
            
        }
     else{
        in++;
     }
    
}
printf("%d in\n",in);
printf("%d out\n",out);
 
    return 0;
}