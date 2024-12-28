#include <stdio.h>
int main()
{
    int num; //                                         is method me (i) ko increase kiya hai 
    printf("Enter Number : ");
    scanf("%d",&num); 
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        if(num == 0) break;
        fact *= i;
        printf("Factorial %d is : %d\n",i,fact);
    }
    if (num == 0) printf("Factorial of 0 is : 1");
    
    //                                   OR
    // int i=1;
    // while(i<=num)
    // {
    //     if(num == 0) break;
    //     fact*=i;
    //     printf("Factorial %d is : %d\n",i,fact);
    //     i++;
    // }
    // if (num == 0) printf("Factorial of 0 is : 1");

    return 0;
}