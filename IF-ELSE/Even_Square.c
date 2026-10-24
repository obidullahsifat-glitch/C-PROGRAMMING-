#include <stdio.h>
#include <math.h>
 
int main() {
 
    int N;
    scanf("%d",&N);
    int i;
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            int sqr=pow(i,2);
            printf("%d^2 = %d\n",i,sqr);
        }
    }
 
    return 0;
}