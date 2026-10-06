#include <stdio.h>

int main() {
 int n;
 int hours=0,minutes=0,second=0;
 scanf("%d",&n);
 if(n>=3600)
 {
  hours=n/3600;
  n=n%3600;
 }
 if(n>=60)
 {
     minutes=n/60;
     n=n%60;
 }
 second=n;
 printf("%d:%d:%d\n",hours,minutes,second);

    return 0;
}
