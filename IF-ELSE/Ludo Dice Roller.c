#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

srand(time(NULL));
printf("=================================\n");
printf("     WELCOME TO LUCKY SIX!       \n");
printf("=================================\n\n");
int choice,dice;
while(1)
{
  printf("Press 1 to Roll the Dice, 0 to Exit:");
  scanf("%d",&choice);
  if(choice==1)
  {
      int dice=(rand()%6)+1;
      printf("You rolled a:%d\n",dice);
      if(dice==6)
      {
          printf("Awesome! You got a Six!\n");


      }

      }
      else if(choice==0)
      {
          printf("Game over!Thanks for Playing.\n");
          break;
      }
      else{
        printf("Invalid Choice! Please press 1 or 0.\n");
      }
}







    return 0;
}
