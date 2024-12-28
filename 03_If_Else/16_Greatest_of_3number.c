#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : "); // 2 3 4
    scanf("%d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is greatest numeber", num1);
        }
        else
        {
            printf("%d is greatest", num3);
        }
    }
    else if (num2 > num1)
    {
        if (num2 > num3)
        {
            printf("%d is greatest numeber", num2);
        }
        else
        {
            printf("%d is greatest", num3);
        }
    }
    else if (num3 > num1)
    {
        if (num3 > num2)
        {
            printf("%d is greatest numeber", num3);
        }
         else{
            printf("%d is greatest",num1);
        }
    }
    else
    {
        printf("No one is greatest");
    }
    return 0;
}