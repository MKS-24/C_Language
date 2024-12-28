#include <stdio.h>
int sum(int n)
{
    if(n==0) return 0;
   return n + sum(n-1);
}
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int summ = sum(n);
    printf("Sum is : %d",summ);
    return 0;
}