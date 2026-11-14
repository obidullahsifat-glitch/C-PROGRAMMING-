#include <stdio.h>

int len(char ch[],int i)
{
    if(ch[i]=='\0')
    {
        
        return 0;
    }
    int size=len(ch,i+1);
    return size+1;
}


int main()
{
    char ch[100];
    fgets(ch,100,stdin);
    int si=len(ch,0);
    printf("%d",si-1);
    
    
    
    
    
    return 0;
}
