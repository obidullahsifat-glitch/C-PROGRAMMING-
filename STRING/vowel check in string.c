#include <stdio.h>
#include <string.h>
int main()
{
char ch[100];

fgets(ch,sizeof(ch),stdin);
int i=0;
int count=0;

while(ch[i]!='\0')
{
   if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' || ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
    {

        count++;
    }

    i++;
}
printf("Total vowel=%d\n",count);



    return 0;
}
