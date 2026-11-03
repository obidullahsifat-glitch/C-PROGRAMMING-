#include <stdio.h>
int main()
{
    int N,L;

    int count=0;
    scanf("%d %d",&N,&L);
    int i;
    int arr[N];

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);

    }


     for(i=0;i<N;i++)
    {
        if(arr[i]<L)
        {
            count++;
        }

    }

    printf("%d ",count);

      for(i=0;i<N;i++)
    {
        if(arr[i]<L)
        {
            printf("%d",i+1);

        break;
        }
    }
    if(count==0)
    {
        printf("%d",0);
    }




    return 0;

}
