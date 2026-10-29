#include <stdio.h>
#include <string.h>
int main()
{
   char a[100];
   char b[100];
   scanf("%s",a);
   scanf("%s",b);
   int len=strlen(b);
   for(int i=0;i<=len;i++)
   {

       a[i+5]=b[i];
   }
    printf("%s",a);




    return 0;
}
