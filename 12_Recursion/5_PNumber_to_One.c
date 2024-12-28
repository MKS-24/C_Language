# include<stdio.h>
void num (int n,int a)
{
    if (a>n) return;
    printf("%d\n",a);
    num (n,a+1);
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