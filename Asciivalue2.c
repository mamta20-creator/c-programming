#include<stdio.h>
int main()
{
    char ch;
    printf("enter anything");
    scanf("%c",&ch);

    if(ch >='A' && ch <='Z')
    printf("Uppercase letter");
    else if(ch >='a' && ch <='z')
    printf("lowercase letter");
    else if(ch >='0' && ch <='9')
    printf("Digit");
    else
        ("special symbol");
    return 0;
}