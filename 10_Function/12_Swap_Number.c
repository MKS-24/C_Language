# include<stdio.h>
int main(){
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;  // a+b - b = b=a
    a = a-b;  //  a+b - a = a = b 
    printf("The Value of a is : %d\n",a);
    printf("The Value of b is : %d",b);
    return 0;
}