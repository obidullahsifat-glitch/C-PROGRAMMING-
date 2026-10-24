#include <stdio.h>
 
int main() {
 
int N,i;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    int X;
    scanf("%d",&X);
    
    if(X==0)
    {
        printf("NULL\n");
    }
    else if(X%2==0)
    {
        
        printf("EVEN ");
        if(X>0)
        {
            printf("POSITIVE\n");
        }
        else
        {
            printf("NEGATIVE\n");
        }
    }
    
     else if(X%2!=0)
    {
        
        printf("ODD ");
        if(X>0)
        {
            printf("POSITIVE\n");
        }
        else
        {
            printf("NEGATIVE\n");
        }
    }
}
    return 0;
}