#include <stdio.h>
int main()
{
float a,b,c;
printf("Enter the three base");
scanf("%f %f %f",&a,&b,&c);
if(a+b>c && a+c>b && b+c>a)
{
printf("Valid Triangle\n");

if(a==b && b==c)
{
printf("Equilateral\n");
}
else if
(a==b || a==c || b==c)
{
printf("Isosceles\n");
}
else{

printf("Scalene\n");

}
}

else{
printf("Invalid Triangle\n");
}


return 0;


}
