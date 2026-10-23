#include <stdio.h>
int main()
{
float t;
scanf("%f",&t);
if(t>0.00 && t<=2000.00)
{
    printf("Isento\n");
}
else if(t>2000.00 && t<=3000.00)
{
    float ans1=(t-2000.00)*0.08;
    printf("R$ %.2f\n",ans1);
}
else if(t>3000.00 && t<=4500.00)
{
    float ans2=(t-3000.00)*0.18+1000*0.08;
    printf("R$ %.2f\n",ans2);
}
else if(t>4500.00)
{
    float ans3=(t-4500.00)*0.28+1000*0.08+1500*0.18;
    printf("R$ %.2f\n",ans3);
}


    return 0;
}