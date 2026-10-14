#include <stdio.h>
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


for(i=0;i<N;i++)
{

if(A[i]<0)
{
    
    
    A[i]=2;
    

}

else if(A[i]>0)
{
    
    A[i]=1;
    

}
else

{
    
    A[i]=0;
    

}
printf("%d ",A[i]);

}

    return 0;
}