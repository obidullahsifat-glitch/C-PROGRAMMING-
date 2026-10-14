#include <stdio.h>
#include <limits.h>
int main()
{
int N;
int count1=0;
int i;
int min=INT_MAX;
scanf("%d",&N);
for(i=0;i<N;i++)
{

    int x;
    scanf("%d",&x);

if(x<0)
{
    x=x*(-1);
    
}


if(x<min)
{
    min=x;
   
}

}
 printf("%d\n",min);



}
   