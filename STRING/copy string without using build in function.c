#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
char b[100];
scanf("%s",a);
scanf("%s",b);  /*must be length a>b for this code*/
int len=strlen(b);
for(int i=0;i<=len;i++)
{
  a[i]=b[i];

}

printf("%s",a);



    return 0;
}
