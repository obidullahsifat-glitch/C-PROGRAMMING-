#include <stdio.h>
int main()
{

    int a[5];
    for(int i=4;i>=0;i--)
    {


         printf("Enter the %dth number\n",i+1);
         scanf("%d",&a[i]);





    }
    printf("%d %d %d %d %d",a[4],a[3],a[2],a[1],a[0]);



    return 0;


}
