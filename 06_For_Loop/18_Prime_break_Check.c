#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++) // 2 is only even prime number
    {
        if (n % i == 0)
        {
            a = 1;
            break; // break is used to terminate the loop when condition is hit at once
        }
    }
    if (n == 0 || n == 1)
        printf("Number is Neither Prime nor Composite\n");
        else if(n<0) printf("Not fullfil the definition");
    else if (a == 0)
        printf("Number is Prime");
    else
        printf("Number is Composite");

    return 0;
}