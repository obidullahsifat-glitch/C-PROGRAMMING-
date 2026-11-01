#include <stdio.h>
int main()
{
int N;
scanf("%d",&N);
int count=0;
int arr[N];
for(int i=0;i<N;i++)
{
    
    scanf("%d",&arr[i]);
}
for(int i=0;i<N-1;i++)
{
   
    for(int j=i+1;j<N;j++)
    {
        if(arr[i]==arr[j])
        {
            count=count+1;
            break;
        }
    }
   
}
printf("%d",N-count);




    return 0;
}