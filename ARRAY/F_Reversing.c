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


    for(i=0,j=N-1;i<j;i++,j--)
    {





    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}


    for(int k=0;k<N;k++)
    {

        printf("%d ",arr[k]);
    }


    return 0;
}
