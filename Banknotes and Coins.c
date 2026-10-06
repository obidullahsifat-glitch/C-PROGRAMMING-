#include <stdio.h>

int main() {
 double n;
 int ans1=0,ans2=0,ans3=0,ans4=0,ans5=0,ans6=0,ans7=0,ans8=0,ans9=0,ans10=0,ans11=0,ans12=0;

 scanf("%lf",&n);
 int taka=(int)(n * 100 + 0.00001);
 printf("NOTAS:\n");

 if(taka>=10000)
 {ans1=taka/10000;
 taka=taka%10000;
 }
  if(taka>=5000)
  {ans2=taka/5000;
 taka=taka%5000;
  }
  if(taka>=2000)
  {ans3=taka/2000;
 taka=taka%2000;
  }
  if(taka>=1000)
  {ans4=taka/1000;
 taka=taka%1000;
  }


 if(taka>=500)
 {ans5=taka/500;
 taka=taka%500;
 }

 if(taka>=200)
 {ans6=taka/200;
 taka=taka%200;
 }


 printf("%d nota(s) de R$ 100.00\n",ans1);
 printf("%d nota(s) de R$ 50.00\n",ans2);
 printf("%d nota(s) de R$ 20.00\n",ans3);
 printf("%d nota(s) de R$ 10.00\n",ans4);
 printf("%d nota(s) de R$ 5.00\n",ans5);
 printf("%d nota(s) de R$ 2.00\n",ans6);
 printf("MOEDAS:\n");
  if(taka>=100)
 {ans7=taka/100;
 taka=taka%100;
 }
  if(taka>=50)
 {ans8=taka/50;
 taka=taka%50;
 }
  if(taka>=25)
 {ans9=taka/25;
 taka=taka%25;
 }
  if(taka>=10)
 {ans10=taka/10;
 taka=taka%10;
 }
  if(taka>=5)
 {ans11=taka/5;
 taka=taka%5;
 }
  if(taka>=1)
 {ans12=taka/1;
 taka=taka%1;
 }
 printf("%d moeda(s) de R$ 1.00\n",ans7);
 printf("%d moeda(s) de R$ 0.50\n",ans8);
 printf("%d moeda(s) de R$ 0.25\n",ans9);
 printf("%d moeda(s) de R$ 0.10\n",ans10);
 printf("%d moeda(s) de R$ 0.05\n",ans11);
 printf("%d moeda(s) de R$ 0.01\n",ans12);




    return 0;
}

