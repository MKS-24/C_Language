#include <stdio.h>
void sum(int n, int parameter)
{
    if (n == 0)
    {
        printf("Sum is : %d", parameter); 
        return;
    }
    sum(n - 1, parameter + n);
    return;
}
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int parameter = 0;
    sum(n, parameter);
    return 0;
}