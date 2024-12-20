#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);
    int power = pow(num1,num2);
    printf("The Power of 1st to 2nd is : %d",power);
    return 0;
}