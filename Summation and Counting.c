#include <stdio.h>
int main()
{
  int n;
  int sum;
  printf("Enter your value");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
      if(i%2!=0)
      {   sum=sum+i;
          printf("%d\n",i);
      }
  }
  printf("Sum=%d",sum);


    return 0;
}
