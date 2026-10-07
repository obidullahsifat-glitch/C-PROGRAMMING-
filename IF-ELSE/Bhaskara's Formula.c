#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);

    if(a!=0 && b*b-4*a*c>=0)
    {
       float x1=((-b)+sqrt(b*b-4*a*c))/(2*a);
       float x2=((-b)-sqrt(b*b-4*a*c))/(2*a);

        printf("R1 = %.5f\n",x1);
        printf("R2 = %.5f\n",x2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
