#include <stdio.h>
int main()
{
    float n1, n2;
    char oper;
    // printf("Enter first number");
    scanf("%f", &n1);
    // printf("Press what do you want (*,/,-,+) : ");
    scanf(" %c", &oper);     // char me aik space dediya karo
    // printf("Enter second number");
    scanf("%f", &n2);
    switch(oper){
        case '*' : printf("%f",n1*n2);
        break;
        case '/' : printf("%f",n1/n2);
        break;
        case '+' : printf("%f",n1+n2);
        break;
        case '-' : printf("%f",n1-n2);
        break;
        default: printf("Invalid Input");
    }
    return 0;
}