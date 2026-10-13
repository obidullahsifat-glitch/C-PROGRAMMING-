#include <stdio.h>
int main()
{

int X=1999;

int i;
while(1)
{
scanf("%d",&i);
if(i!=X)
{
    printf("Wrong\n");

}
if(i==X)
    {
        printf("Correct\n");
        break;
    }
}


 

return 0;
}