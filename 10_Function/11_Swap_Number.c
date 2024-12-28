#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("The Value of a is : %d\n",a);
    printf("The Value of b is : %d",b);
    return 0;
}