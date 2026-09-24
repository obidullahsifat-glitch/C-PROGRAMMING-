#include <stdio.h>
#include <string.h>
int main()
{
 char str[20];
 double salary;
 double total_sold;

 fgets(str,sizeof(str),stdin);
  scanf("%lf",&salary);
  scanf("%lf",&total_sold);

  double total_salary=salary+(total_sold*0.15);

  printf("Total = R$ %.2lf",total_salary);




    return 0;
}
