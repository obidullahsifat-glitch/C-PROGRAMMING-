#include <stdio.h>
int main()
{
int N;
scanf("%d",&N);
int A[N];
int i;
for(i=0;i<N;i++)
{
    
    scanf("%d",&A[i]);
}


    int x;
    scanf("%d",&x);
    int found=0;
    for(i=0;i<N;i++)
    {
    
    if(A[i]==x)
    {
        found=1;
        break;
    }
    else
    {
        found=0;
    }
    }
    if(found==1)
    {
        printf("%d\n",i);
    }
    else
    {
        printf("%d\n",-1);
    }
    return 0;
}