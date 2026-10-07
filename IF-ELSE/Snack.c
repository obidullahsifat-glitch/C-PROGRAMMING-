#include <stdio.h>

int main() {
 int code,total_items;
 scanf("%d %d",&code,&total_items);

 switch(code)
 {
     case 1:
     printf("Total: R$ %.2f\n",(float)(total_items*4.00));
     break;
     case 2:
       printf("Total: R$ %.2f\n",(float)(total_items*4.50));
       break;
       case 3:
         printf("Total: R$ %.2f\n",(float)(total_items*5.00));
         break;
         case 4:
           printf("Total: R$ %.2f\n",(float)(total_items*2.00));
           break;
           case 5:
             printf("Total: R$ %.2f\n",(float)(total_items*1.50));
             break;


 }


    return 0;
}
