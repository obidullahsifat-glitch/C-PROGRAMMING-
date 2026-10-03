#include <stdarg.h>
#include <stdio.h>

int noname(int n,...)
{
    va_list nope;
    va_start(nope,n);
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum=sum+va_arg(nope, int);


       }
        va_end(nope);
        return sum;


    }

int main()
{

  printf("%d\n",noname(10,10,10,10,10,10,10,10,10,10,10));

    return 0;
}
