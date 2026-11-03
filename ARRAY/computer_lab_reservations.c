#include <stdio.h>
int main()
{
    int N,M;
    int count=0;
    int freq[200]={0};

    scanf("%d %d",&N,&M);

    int com[M];
    int i,j;
    for(i=0;i<M;i++)
    {
        scanf("%d",&com[i]);
    }


    for(i=0;i<M;i++)
    {
        freq[com[i]]++;
    }


    for(i=0;i<M;i++)
    {

if(freq[i]==1)
{
    count++;
}
if(freq[i]>1)
{
    count++;
}


    }
printf("%d ",count);
printf("%d",(M-count));
printf("\n");
for(i=1;i<M;i++)
{
    if(freq[i]==0)
    {
        printf("%d ",i);
    }


   }

if(count>=N)
   {
       printf("NONE\n");
   }

    return 0;
}

