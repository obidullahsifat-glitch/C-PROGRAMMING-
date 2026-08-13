#include <stdio.h>
int main()
{
int number;
printf("Enter your 4 digit number");
scanf("%i",&number);
int first_digit=number/1000;
int first_vagsesh=number%1000;
int second_digit=first_vagsesh/100;
int second_vagsesh=first_vagsesh%100;
int third_digit=second_vagsesh/10;
int fourth_digit=second_vagsesh%10;

putchar(first_digit+'0');
putchar('\n');
putchar(second_digit+'0');
putchar('\n');
putchar(third_digit+'0');
putchar('\n');
putchar(fourth_digit+'0');
putchar('\n');

return 0;






}
