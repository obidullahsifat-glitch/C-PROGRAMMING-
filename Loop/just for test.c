#include <stdio.h>
void num(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
    for(i=1;i<a;i++)
    {
        for(j=1;j<=a-i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

      }




int main()
{
    int n;
    scanf("%d",&n);
    num(n);





    return 0;
}
