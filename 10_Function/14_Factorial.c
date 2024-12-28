#include <stdio.h>
int ffact(int n)
{
    int a=n;
    int fact=1;
    for(int i=1; i<=n ; i++)
    {
        fact *= a;
        a--;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int fact = ffact(n);
    printf("Factorial is : %d",fact);
 return 0;
}