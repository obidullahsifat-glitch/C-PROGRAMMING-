#include <stdio.h>
#include <limits.h>
int main()
{

int N;
int i;

scanf("%d",&N);
int A[N];
for(i=0;i<N;i++)
{
    

scanf("%d",&A[i]);
}
int min=INT_MAX;
int temp;
for(i=0;i<N;i++)
{
    if(A[i]<min)
    {    
        min=A[i];
        temp=i;
        
    }
    
}

printf("%d %d",min,temp+1);
    return 0;
}