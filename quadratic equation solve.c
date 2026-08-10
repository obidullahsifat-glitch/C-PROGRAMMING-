#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("a=");
    scanf("%f",&a);

    printf("b=");
    scanf("%f",&b);

    printf("c=");
    scanf("%f",&c);


    float x1=(-b+sqrt(b*b-4*c*a)) /(2*a);


    float x2=(-b-sqrt(b*b-4*c*a))/(2*a);

    printf("\n\n");

    printf("Solution\n");

    printf("\n");

    printf("X1 = %.2f\n",x1);
    printf("X2 = %.2f\n",x2);

    return 0;

}
