
#include <stdio.h>
int main()
{

float salary;
scanf("%f",&salary);
if(salary>0 && salary<=400.00)
{
    float new_salary=salary*0.15+salary;
    printf("Novo salario: %.2f\n",new_salary);
    printf("Reajuste ganho: %.2f\n",(new_salary-salary));
    printf("Em percentual: 15 %%\n");
}

else if(salary>=400.01 && salary<=800.00)
{
    float new_salary=salary*0.12+salary;
    printf("Novo salario: %.2f\n",new_salary);
    printf("Reajuste ganho: %.2f\n",(new_salary-salary));
    printf("Em percentual: 12 %%\n");
}
else if(salary>=800.01 && salary<=1200.00)
{
    float new_salary=salary*0.10+salary;
    printf("Novo salario: %.2f\n",new_salary);
    printf("Reajuste ganho: %.2f\n",(new_salary-salary));
    printf("Em percentual: 10 %%\n");
}
else if(salary>=1200.01 && salary<=2000.00)
{
    float new_salary=salary*0.07+salary;
    printf("Novo salario: %.2f\n",new_salary);
    printf("Reajuste ganho: %.2f\n",(new_salary-salary));
    printf("Em percentual: 7 %%\n");
}
else if(salary>2000.00)
{
    float new_salary=salary*0.04+salary;
    printf("Novo salario: %.2f\n",new_salary);
    printf("Reajuste ganho: %.2f\n",(new_salary-salary));
    printf("Em percentual: 4 %%\n");
}
    return 0;
}