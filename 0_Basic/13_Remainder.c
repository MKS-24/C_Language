# include<stdio.h>
int main(){
    // Divisor * Quotient + Remainder = Dividend  (esa kuch hota hai)
    // Remainder = Dividend - Divisor * Quotient (formula of Remainder)
    int dividend;
    printf("Enter dividend : ");
    scanf("%d",&dividend);
    int divisor;
    printf("Enter divisor : ");
    scanf("%d",&divisor);
    int quotient = dividend / divisor ;
    int remainder = dividend - divisor * quotient;
    printf("The remainder when %d is divided by %d is : %d ",dividend,divisor,remainder);

    return 0;
}
