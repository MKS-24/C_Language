#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num); 
    int fact = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact *= i;
    // }
    //                                   OR
    int i=1;
    while(i<=num)
    {
        fact*=i;
        i++;
    }
    printf("Factorial is : %d",fact);

    return 0;
}