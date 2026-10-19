#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    int j;
    scanf("%d",&t);
char ch[10000];
int count=0;
for(j=0;j<t;j++)
{


scanf("%s",ch);
int length=strlen(ch);

if(length>10)
{


printf("%c",ch[0]);
printf("%d",(length-2));
printf("%c",ch[length-1]);
printf("\n");

}

else{
        int i=0;
    while(ch[i]!='\0')
    {

        printf("%c",ch[i]);
        i++;
    }
    printf("\n");
}
}

    return 0;
}

