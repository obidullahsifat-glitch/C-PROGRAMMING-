#include <stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=10;i++)
  {
      if(i%3==0)
      {
      for(j=1;j<=10;j++)
      {
          printf("%d * %d = %d\n",i,j,i*j);

      }
      }



printf("\n\n");
  }



    return 0;
}
