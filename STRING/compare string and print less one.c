#include <stdio.h>
#include <string.h>
int main()
{
char str1[100];
char str2[100];
scanf("%s",&str1);
scanf("%s",&str2);
int len1=strlen(str1);
int len2=strlen(str2);
int i=0;
while(1)
{

if(str1[i]=='\0')
{
    printf("%s",str1);
    break;
}
else if(str2[i]=='\0')
{
    printf("%s",str2);
    break;
}
else if(str1[i]=='\0' && str2[i]=='\0')
{
    printf("str1 and str2 are equal\n");
    break;
}
else if(str1[i]>str2[i])
{
    printf("%s",str2);

 break;

}
else if(str2[i]>str1[i])
{
     printf("%s",str1);
     break;
}
else if(str1[i]==str2[i])
{
    i++;
}



}






    return 0;
}

