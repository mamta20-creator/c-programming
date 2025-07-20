#include<stdio.h>
int main()
{
    int h,m,s;
    printf("enter hours");
    scanf("%d",&h);
        printf("enter minutes");
    scanf("%d",&m);
        printf("enter seconds");
            scanf("%d",&s);

    if(h>=0 && h<24)
    {
        if(s>=0 && s<60)
        printf("Time is valid");
    else
    printf("seconds is Invalid");
    }     
    else
    printf("Hours is Invalid");
return 0;   






}