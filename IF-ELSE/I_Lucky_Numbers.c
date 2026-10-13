#include <stdio.h>
int main()
{
int N;
scanf("%d",&N);
int digit1=N%10;
int digit2=N/10;
if(digit1%digit2==0 || digit2%digit1==0)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}


    return 0;
}