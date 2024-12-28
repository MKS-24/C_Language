#include<stdio.h.>
int main(){
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    int sumkaro(int a,int b);
    int sum= sumkaro(a,b);    // a and b ki values ko pass kervaya sumkaro ke function me.
    printf("Sum is : %d",sum);
    return 0;
}
int sumkaro(int a,int b){
    return a+b;
}