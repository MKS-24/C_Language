#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    void preinpost(int n);
    preinpost(n);
    return 0;
}
void preinpost(int n)
{
    if (n ==0 ) return;
    printf("Pre : %d\n",n);
    preinpost(n - 1);
    printf("In : %d\n",n);
    preinpost(n - 1);
    printf("Post : %d\n",n);
    return;
}
