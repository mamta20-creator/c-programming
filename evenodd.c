#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n&1)
    printf("odd nummber");
else
printf("even number");
return 0;
}