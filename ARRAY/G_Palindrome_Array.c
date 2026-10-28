#include <stdio.h>
int main()
{
int N;
int i,j;
scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=1;

    for(i=0,j=N-1;i<j;i++,j--)
    {

     if(arr[i]!=arr[j])
     {
        count=0;
     }



    
    }
if(count==1)
{
    printf("YES\n");
}
else{
    printf("NO\n");
}
    


    return 0;
}
