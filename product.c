#include<stdio.h>
int main()
{
    int pid1,pid2,pid3;
    char pname1[100],pname2[200],pname3[100];
    float price1,price2,price3;
    int pqty1,pqty2,pqty3;
    float total, disper,disamt,payamt;
    
    printf("Enter Id:");
    scanf("%d", &pid1);
    printf("Enter name=");
    scanf("%s",&pname1);
    printf("Enter qty:");
    scanf("%d",&pqty1);
    printf("Enter price:");
    scanf("%f",&price1);
    
     printf("Enter Id:");
    scanf("%d", &pid2);
    printf("Enter name=");
    scanf("%s",&pname2);
    printf("Enter qty:");
    scanf("%d",&pqty2);
    printf("Enter price:");
    scanf("%f",&price2);
    
     printf("Enter Id:");
    scanf("%d", &pid3);
    printf("Enter name=");
    scanf("%s",&pname3);
    printf("Enter qty:");
    scanf("%d",&pqty3);
    printf("Enter price:");
    scanf("%f",&price3);
    

    total =(price1 * pqty1) + (price2 * pqty2) +(price3 * pqty3);
    if(total >= 100000)
    disper=10;
    else if(total >= 80000)
    disper=8;
    else if(total >= 50000)
    disper=5;
    else if(total >= 30000)
    disper=2;
    else
    disper=0;

    disamt =(total * disper)/100;
    payamt = total - disamt;

    printf("\n----------------------------------------------------------------------------|");
    printf("\n|  ID  |            Name     |  price       |   Qty        |   total        |");
    printf("\n----------------------------------------------------------------------------|");
    printf("\n|%6d|%21s|%14f|%14f|%15f|", pid1, pname1, price1, pqty1,   (price1 * pqty1 ) ) ;
    printf("\n----------------------------------------------------------------------------|");
    printf("\n|%6d|%21s|%14f|%14f|%15f|", pid2, pname2, price2, pqty2,   (price2 * pqty2 ) ) ;
    printf("\n----------------------------------------------------------------------------|");
    printf("\n|%6d|%21s|%14f|%14f|%15f|", pid3, pname3, price3, pqty3,   (price3 * pqty3 ) ) ;
    printf("\n----------------------------------------------------------------------------|");
    printf("\n\t\t\t\tTotal                      :%2f", total);
    printf("\n\t\t\t\tDiscount percentage (&&)   :%2f", disper);
    printf("\n\t\t\t\tDiscount Amount            :%2f", disamt);
    printf("\n\t\t\t\tPay Amount                 :%2f", payamt);
    

    return 0;






















}