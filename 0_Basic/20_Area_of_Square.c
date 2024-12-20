# include<stdio.h>
int main(){
    float side;
    printf("Enter side : ");
    scanf("%f",&side);
    printf("Area of Square is : %.2f",side * side);
    // %.2f me (.2) field width specifier
    // ye decimal ke baad jitne number print krwane hote,
    // dot or point ke aage utne number likh dete 
    return 0;
}