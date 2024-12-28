#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter Base Number : ");
    scanf("%d", &num1);
    printf("Enter Power Number : ");
    scanf("%d", &num2);  
    int power=1;
    for(int i=1;i<=num2;i++)
    {                      
        power=power * num1;
        printf("%d of power %d is : %d\n",num1,i,power);
    }
    if(num2==0) printf("%d raised to the power %d is : %d",num1,num2,power);
    return 0;
}