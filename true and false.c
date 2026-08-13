#include <stdio.h>
#include <ctype.h>
int main()
{
char ch;
printf("Enter the Character");
scanf("%c",&ch);
printf("%d\n",isalpha(ch));
printf("%d\n",isalnum(ch));
printf("%d\n",isupper(ch));
printf("%d\n",islower(ch));
printf("%d\n",isspace(ch));
printf("%d\n",isdigit(ch));
printf("%d\n",isxdigit(ch));
printf("%d\n",isblank(ch));


return 0;



}
