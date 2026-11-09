#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
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
    int found=0;
int X;
scanf("%d",&X);
     for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            if(arr[i][j]==X)
            {

                found=1;

            }



        }
    }
    if(found==1){
        printf("will not take number\n");
    }
    else{
        printf("will take number\n");
    }


    return 0;
}
