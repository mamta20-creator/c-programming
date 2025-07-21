#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("\nAddition\nSubstraction\nMultiplication\ndivision enter a choice:");
    scanf("%d",&ch);

    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:printf("Addition is %d",(a+b));
               break; 
        case 2:printf("Substraction is %d",(a-b));
               break;
        case 3:printf("Multiplication is %d",(a*b));
               break;
        case 4:printf("Division is %d",(a/b));
               break;
        default: 
        printf("Invalid Choice");
        return 0;       
    }

}