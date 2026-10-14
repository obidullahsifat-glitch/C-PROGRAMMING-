#include <stdio.h>
int main()
{

int N;
long long int sum=0;
scanf("%d",&N);
long long int A[N];
for(int i=0;i<N;i++)
{ 
    
    scanf("%lld",&A[i]);
}
for(int i=0;i<N;i++)
{ 
    sum=sum+A[i];
   
}
 if(sum<0)
    {
        printf("%lld\n",(-sum));
    }
    else if(sum>0)
    {
        printf("%lld\n",sum);
    }
    else
    {
        printf("%d\n",0);
    }


    return 0;
}