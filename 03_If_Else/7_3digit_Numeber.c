# include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number > 99 && number < 1000){
        printf("%d is a three digit number",number);
    }
    else {
        printf("%d is a not a three digit number",number);
    }
    return 0;
}