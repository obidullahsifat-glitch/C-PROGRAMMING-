#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main() {

    double redius;
    scanf("%lf",&redius);
    double volume=(4.0/3)*pi*pow(redius,3);
    printf("VOLUME = %.3lf\n",volume);

    return 0;
}
