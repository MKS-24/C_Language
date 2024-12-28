# include<stdio.h>
void num (int n,int a)
{
    if (a>n) return;
    num (n,a+1);
    printf("%d\n",a);
    return;
}
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int a=1;
    num(n,a);
    return 0;
}