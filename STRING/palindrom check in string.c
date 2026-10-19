#include <stdio.h>
#include <string.h>
int main()
{
char ch[10000];
int count=0;
scanf("%s",ch);
int length=strlen(ch);
int i;
for(i=length-1;i>=0;i--)
{
    if(ch[i]==ch[4-i])
    {

        count++;
    }


}
if(count==length)
{
    printf("Palindrom\n");
}
else{
    printf("Not a Palindrom\n");
}


    return 0;
}

