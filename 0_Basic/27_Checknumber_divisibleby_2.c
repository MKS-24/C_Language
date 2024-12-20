# include<stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("If number is divisible by 2 then print 1 if not then print 0 : %d",num%2 == 0);
    return 0;
}