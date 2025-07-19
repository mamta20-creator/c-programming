#include<stdio.h>
int main()
{
    float id,price1,price2,price3,qty1,qty2,qty3,total_price,discount_percentage,discount_amount,pay_amount;
    char name[10];
    
    printf("enter product id=");
    
    scanf("%f", &id);
    printf("enter product name=");
    scanf("%f",&name);
    printf("enter product price1=");
    scanf("%f",&price1);
    printf("enter product price2=");
    scanf("%f",&price2);
    printf("enter product price3=");
    scanf("%f",&price3);
    printf("enter product quantity=1");
    scanf("%f",&qty1);
    printf("enter product quantity=2");
    scanf("%f",&qty2);
    printf("enter product quantity=3");
    scanf("%f",&qty3);

    total_price=(price1 * qty1) + (price2 * qty2) +(price3 * qty3);
    if(total_price >= 100000)
    discount_percentage=10;
    else if(total_price >= 80000)
    discount_percentage=8;
    else if(total_price >= 50000)
    discount_percentage=5;
    else if(total_price >= 30000)
    discount_percentage=2;
    else
    discount_percentage=0;

    discount_amount=(total_price * discount_percentage)/100;
    pay_amount = total_price - discount_amount;

    printf("\n product id=%f",id);
    printf("\n product name=%s",name);
    printf("\n total price=%f",total_price);
    printf("\n discount percentage=%f",discount_percentage);
    printf("\n discount amount=%f",discount_amount);
    printf("\n total amount=%f",pay_amount);

    printf("\n pay amount=%f",pay_amount);

    return 0;






















}