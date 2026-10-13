#include <stdio.h>
int main()
{
int N;
 int max=0;
scanf("%d",&N);
int i;
for(i=1;i<=N;i++)
{

    int X;
   
    scanf("%d",&X);
    
        if(X>max)
        {
            max=X;
        }
    

}
printf("%d ",max);




    return 0;
}