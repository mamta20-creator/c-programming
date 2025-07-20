#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("enter anything");
scanf("%c",&ch);

if(isupper(ch))
else if(islower(ch))
else if(isdigit(ch))
else
    ("special symbol")
return 0;
}