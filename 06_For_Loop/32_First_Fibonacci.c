#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    int a = 1;
    int b = 1;
    int sum = 1;
    if(num >= 1 ) printf("The 1 Fibonacci Number is : %d\n", a);
    if(num >= 2 ) printf("The 2 Fibonacci Number is : %d\n", a);
    for (int i = 3; i <= num; i++)  // 1 ,1 ,2 ,3 ,5 ,8 ,13
    {
        
        sum = a + b;
        a = b;
        b = sum;
        printf("The %d Fibonacci Number is : %d\n",i, sum);

    }
    // printf("The %d Fibonacci Number is : %d\n",num, a+b);
// 1 1 2 3 5 8 13
    return 0;
}