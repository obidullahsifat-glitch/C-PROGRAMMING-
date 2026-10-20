#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d",&t);
  char ch1[10000];
  char ch2[10000];
  scanf("%s",ch1);
  scanf("%s",ch2);
  int i,j;
  int len1=strlen(ch1);
  int len2=strlen(ch2);



  for(i=0;i<len1;i++)
  {
      if(ch1[i]>='A' && ch1[i]<='Z')
        ch1[i]=tolower(ch1[i]);
      if(ch2[i]>='A' && ch2[i]<='Z')
        ch2[i]=tolower(ch2[i]);
  }
        if(strcmp(ch1,ch2)==0)
        {
            printf("%d\n",0);
        }
      else if(strcmp(ch1,ch2)>0)
      {

          printf("%d\n",1);
      }
      else
      {

          printf("%d\n",-1);
      }






    return 0;
}
