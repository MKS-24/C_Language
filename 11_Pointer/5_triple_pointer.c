#include <stdio.h>
int main()
{
    int a;
    a = 1;
    int* x = &a;
    *x= 5;
    int** y = &x;
    printf("a is : %d\n", a);
    printf("*x is : %d\n", *x);
    printf("**y is : %d", **y);
    return 0;
}