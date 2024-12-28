# include<stdio.h>
int main(){
    float first;
    printf("Enter a first number : ");
    scanf("%f",&first);
    float second;
    printf("Enter a second number : ");
    scanf("%f",&second);
    float perimeter = 2 * ( first + second); 
    printf("The Perimeter of Square is : %.3f",perimeter);
    return 0;
}