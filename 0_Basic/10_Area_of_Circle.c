# include<stdio.h>
int main(){
    float rad;
    printf("Enter a radius : ");
    scanf("%f",&rad);
    float area = 3.1415 * rad * rad;
    printf("Area of Circle is : %f",area);
    return 0;
}