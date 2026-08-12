#include <stdio.h>
int main()

{
int fact8 = 1*2*3*4*5*6*7*8;  //short-data overflow
short fact4 = 1*2*3*4;
short comb84 = fact8/fact4/fact4;

printf("%i %hi",fact8,comb84);  //hi-incorrect type specifier



return 0;

}
