
#include <stdio.h>
int main()
{

int N;
int X;
int pos=0,neg=0;
int even=0,odd=0;
int i,j;
scanf("%d",&N);
for(i=1;i<=N;i++)
{

scanf("%d",&X);
if(X%2==0)
{
    even++;

    }
else

{
    odd++;

}
if(X>0)
{
    pos++;

}
else if(X<0)
{
    neg++;

}

}

printf("Even: %d\n",even);
printf("Odd: %d\n",odd);
printf("Positive: %d\n",pos);
printf("Negative: %d\n",neg);







return 0;
}
