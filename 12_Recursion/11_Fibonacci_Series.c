# include<stdio.h>
int series(int n)
{
    if (n==1 || n==2) return 1;
    return series(n-1) + series(n-2);
}
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int fibonacci = series(n);
    printf("Fibonacci Series at %d is : %d",n,fibonacci);
    return 0;
}