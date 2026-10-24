#include <stdio.h>
int main()
{
int i;
float a;
int pos=0;
float sum=0;
for(i=1;i<=6;i++)
{
    
scanf("%f",&a);

if(a>0)
{
    pos++;
    sum=sum+a;
    
}


}
printf("%d valores positivos\n",pos);
printf("%.1f\n",sum/pos);

    return 0;
}