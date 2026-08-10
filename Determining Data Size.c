#include <stdio.h>
int main()
{
int a,*b;
float x,*y;
short int p;
long int q;
double r;
long double n;

printf("int data size : %lu\n",sizeof(a));

printf("int data size : %lu\n",sizeof(b));

printf("float data size : %lu\n",sizeof(x));

printf("float data size : %lu\n",sizeof(*y));

printf("short data size : %lu\n",sizeof(p));

printf("long data size : %lu\n",sizeof(q));

printf("double data size : %lu\n",sizeof(r));

printf("long double data size : %lu\n",sizeof(n));



}
