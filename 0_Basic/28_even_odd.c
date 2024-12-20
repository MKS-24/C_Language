# include<stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("If number is even then print '1' if number is odd then print '0' : %d",num%2 == 0);
    return 0;
}