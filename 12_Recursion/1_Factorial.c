# include<stdio.h>
int num(int n)
{
    if (n==0) return 1;  // Base Case
    return n*num(n-1);
}
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int fact = num(n);
    printf("Factorial is : %d",fact);
    return 0;
}