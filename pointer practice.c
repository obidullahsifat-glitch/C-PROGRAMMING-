#include <stdio.h>
int main()
{

   int q=200;
   printf("%d\n",q);
   printf("%p\n",&q);
   printf("%p\n",(&q+1));
   int* x=&q;
   printf("%p\n",x);
   printf("%p\n",*x);
   printf("%p\n",x);
   printf("%d\n",*x);


    return 0;
}
