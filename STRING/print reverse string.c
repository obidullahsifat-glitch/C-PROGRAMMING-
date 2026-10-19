#include <stdio.h>
#include <string.h>
int main()
{
char ch[10000];
scanf("%s",ch);
int length=strlen(ch);
int i;
for(i=length-1;i>=0;i--)
{
    printf("%c",ch[i]);

}




    return 0;
}
