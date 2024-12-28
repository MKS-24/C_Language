#include <stdio.h>
int main()
{
    int num;  //                         is method me (num) ko decrease kiya hai 
    printf("Enter Number : ");
    scanf("%d",&num); 
    int a =num;
    int fact = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //    fact*=a;
    //    a--;
    // }
    //                                   OR
    int i=1;
    while(i<=num)
    {
        fact*=a;
        a--;
        i++;
    }
    printf("Factorial is : %d",fact);

    return 0;
}