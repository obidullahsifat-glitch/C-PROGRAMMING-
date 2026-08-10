#include <stdio.h>
int main()
{

int a,b;
printf("Enter the integer value");
scanf("%d %d",&a,&b);
int sum=a+b;
printf("Addition=%d\n",sum);
int multiplication=a*b;
printf("Multiplication=%d\n",multiplication);

float division=(float)a/b;
printf("Division=%.2f\n",1.0*division);

if(a>b)
{
    int different1=a-b;
    printf("Different=%d\n",different1);
}
else{
int different2=b-a;
    printf("Different=%d",different2);
}

return 0;



}
