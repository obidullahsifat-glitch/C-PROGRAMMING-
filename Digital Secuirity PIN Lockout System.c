#include <stdio.h>
int main()
{
int pin;
 int attempt;
while(1)

 {

    printf("Enter your pin in numerical number\n");
    scanf("%d",&pin);


    if(pin==4512)
    {
        printf("Access Granted!\n");

        break;

    }



    else
    {
        attempt++;
        int attempt_remaining=3-attempt;
        printf("Incorrect PIN\nAttempt remaining:%d\n",attempt_remaining);


       if(attempt==3)
        {
            printf("SYSTEM LOCKED\n");
            return 0;

        }

    }



 }




return 0;
}
