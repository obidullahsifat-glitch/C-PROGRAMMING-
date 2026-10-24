#include <stdio.h>
int main()
{
int i;
int a;
int even=0;

for(i=1;i<=5;i++)
{
    
scanf("%d",&a);
if(a%2==0)
{
    even++;
}
}
printf("%d valores pares\n",even);




    return 0;
}