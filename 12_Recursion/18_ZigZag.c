#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    void zigzag(int n);
    zigzag(n);
    return 0;
}
void zigzag(int n)
{
    if (n ==0 ) return;
    printf("%d ",n);
    zigzag(n - 1);
    printf("%d ",n);
    zigzag(n - 1);
    printf("%d ",n);
    return;
}
