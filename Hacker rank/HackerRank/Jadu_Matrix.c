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

int count1=0,count2=0,count3=0;
for(i=0;i<N;i++)
{
    for(j=0;j<M;j++)
    {
        if(i==j)
        {
            if(arr[i][j]!=1)
            {
                count1=1;
                
            }
        }
        if(i+j==N-1)
        {
            
                    if(arr[i][j]!=1)
                    {
                        count2=1;
                        
                    }
                
            }
            if(i!=j && i+j!=N-1)
            {
                if(arr[i][j]!=0)
                {
                    count3=1;
                    
                    
                }
            }
        
        
    }
}

if(N!=M || count1==1 || count2==1 || count3==1)
{
    printf("NO");
}
else
{
    printf("YES");
}

    return 0;
}