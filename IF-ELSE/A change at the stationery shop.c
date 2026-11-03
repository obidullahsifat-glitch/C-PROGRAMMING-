#include <stdio.h>
int main()
{
    int P,T;
    scanf("%d %d",&P,&T);
    if(P<T)
    {
        int change=(T-P);
        printf("CHANGE %d\n",change);
    }
    else if(P>T)
    {
        int s=P-T;
        printf("SHORT %d\n",s);
    }

    else if(T==P)
    {
        printf("%d\n",0);
    }




    return 0;
}
