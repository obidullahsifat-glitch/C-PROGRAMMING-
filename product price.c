#include <stdio.h>

int main() {
 int pro1,units1;
 int pro2,units2;
 float price1,price2;
 scanf("%d %d %f",&pro1,&units1,&price1);
 scanf("%d %d %f",&pro2,&units2,&price2);

 float price=(units1*price1)+(units2*price2);
 printf("VALOR A PAGAR: R$ %.2f\n",price);

    return 0;
}
