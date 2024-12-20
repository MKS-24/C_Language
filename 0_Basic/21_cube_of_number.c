# include<stdio.h>
int main(){
    float number;
    printf("Enter a number : ");
    scanf("%f",&number);
    float cube = number * number * number; 
    printf("The Perimeter of Square is : %.2f",cube);
    return 0;
}