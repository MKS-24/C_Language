// Ques : Take float input and print the fractional part of the real number.
# include<stdio.h>
int main(){
    float number;
    printf("Enter a real number : ");
    scanf("%f",&number);
    int x = number;
    float decimal = number - x;
    printf("Fractional part of that number %f is : %f",number,decimal);
    return 0;
}