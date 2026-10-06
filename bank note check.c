#include <stdio.h>

int main() {
 int n;
 int ans1=0,ans2=0,ans3=0,ans4=0,ans5=0,ans6=0,ans7=0;

 scanf("%d",&n);
 printf("%d\n",n);

 if(n>=100)
 {ans1=n/100;
 n=n%100;
 }
  if(n>=50)
  {ans2=n/50;
 n=n%50;
  }
  if(n>=20)
  {ans3=n/20;
 n=n%20;
  }
  if(n>=10)
  {ans4=n/10;
 n=n%10;
  }


 if(n>=5)
 {ans5=n/5;
 n=n%5;
 }

 if(n>=2)
 {ans6=n/2;
 n=n%2;
 }
 if(n>=1)
 {
  ans7=n/1;

 }

 printf("%d nota(s) de R$ 100,00\n",ans1);
 printf("%d nota(s) de R$ 50,00\n",ans2);
 printf("%d nota(s) de R$ 20,00\n",ans3);
 printf("%d nota(s) de R$ 10,00\n",ans4);
 printf("%d nota(s) de R$ 5,00\n",ans5);
 printf("%d nota(s) de R$ 2,00\n",ans6);
 printf("%d nota(s) de R$ 1,00\n",ans7);
    return 0;
}
