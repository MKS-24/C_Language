# include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num % 5 == 0      ||    num % 3 == 0 )
    {
        printf("%d is completely divisible by 5 or 3",num);
    }
    else {
        printf("%d is not divisible 5 or 3",num);
    }
    return 0;
}