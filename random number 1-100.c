#include <stdio.h>
#include <stdlib.h>
int main()
{
    srand(time(NULL));
    int i;
    for(i=1;i<=5;i++)
    {
        int num=(rand()%100)+1;
        printf("%d ",num);
    }




    return 0;
}

