#include <stdio.h>
int main()
{
int a[5]={1,2,5,4,3};
int i;
int max=0;
int max_index=0;
for(i=1;i<=4;i++)
{

if(max<a[i])
{
max=a[i];
max_index=i;

}

}
printf("Max value is=%d\nMax Index is =%d",max,max_index);





return 0;
}
