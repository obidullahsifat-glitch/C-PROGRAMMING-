#include <stdio.h>
int main()
{

   int start_hours,start_mins,end_hours,end_mins;
   scanf("%d %d %d %d",&start_hours,&start_mins,&end_hours,&end_mins);
   if(end_hours>start_hours)
   {
       if(end_mins>start_mins)
       {
           printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(end_hours-start_hours),(end_mins-start_mins));
       }
       else if(start_mins>end_mins)
       {
           printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(end_hours-start_hours)-1,((60+end_mins)-start_mins));


       }
       else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(end_hours-start_hours),0);
       }
   }

    else if(start_hours>end_hours)
    {

         if(end_mins>start_mins)
       {
           printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24+end_hours)-start_hours),(end_mins-start_mins));
       }
       else if(start_mins>end_mins)
       {
           printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24+end_hours)-start_hours)-1,((60+end_mins)-start_mins));


       }
       else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24+end_hours)-start_hours),0);
       }

    }


       else if(start_hours==end_hours && start_mins==end_mins)
       {
           printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
       }

       else if(start_hours == end_hours)
   {
        if(end_mins > start_mins)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 0, (end_mins - start_mins));
        }
        else
        {

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 23, ((60 + end_mins) - start_mins));
        }
   }


    return 0;
}

