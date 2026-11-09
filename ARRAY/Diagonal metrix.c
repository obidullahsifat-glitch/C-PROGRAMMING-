#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N][N];
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
int count=0;
     for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i!=j && arr[i][j]!=0)
            {
                count=1;
            }
        }
    }
if(count==0)
{
    printf("Diagonal\n");
}
else if(count==1)
{
    printf("Not a Diagonal\n");
}


    return 0;
}
