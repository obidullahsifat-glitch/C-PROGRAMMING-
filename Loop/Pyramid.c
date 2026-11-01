#include <stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
int temp=n;


for(i=1;i<=temp;i++)
{
    for(int k=1;k<=i-1;k++)
    {
        printf(" ");
    }
    for(j=1;j<=(2*n-1);j++)
    {
        printf("*");
    }
    printf("\n");
    n--;
}




    return 0;
}

