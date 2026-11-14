#include <stdio.h>
int main()
{

int N,M;
scanf("%d %d",&N,&M);
int arr[N][M];
int i,j;

for(i=0;i<N;i++)
{
    for(j=0;j<M;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<N;i++)
{
    for(j=0;j<M;j++)
    {
       if(i==N-1) 
       {
        printf("%d ",arr[i][j]);
       }
       
    }
   
}
printf("\n");

for(i=0;i<N;i++)
{
    for(j=0;j<M;j++)
    {
       if(j==M-1) 
       {
        printf("%d ",arr[i][j]);
       }
       
    }
    
    
}
printf("\n");
    return 0;
}