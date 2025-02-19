# include<stdio.h>
int main(){
    float first;
    printf("Enter a first number : ");
    scanf("%f",&first);
    float second;
    printf("Enter a second number : ");
    scanf("%f",&second);
    float third;
    printf("Enter a third number : ");
    scanf("%f",&third);
    printf("The average of the given numbers is : %f",(first + second + third) / 3);
    return 0;
}