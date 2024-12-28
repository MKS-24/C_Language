#include <stdio.h>
void num(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    num(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    num(n);
    return 0;
}