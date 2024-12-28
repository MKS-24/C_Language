// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     if (num % 5 == 0 || num % 3 == 0)
//     {
//         if (num % 15 != 0)
//         {
//             printf("%d is divisible by 5 or 3 but not divisible by 15",num);
//         }
//         else{
//             printf("%d is divisible by 15",num);
//         }
//     }
//     else
//     {
//         printf("%d is not divisible by 5 or 3", num);
//     }

//     return 0;
// }
//                                 Or
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if ((num % 5 == 0 || num % 3 == 0) && num%15 != 0)
    {
        printf("%d is divisible by 5 or 3 but not divisible by 15", num);
    }
    else
    {
        printf("%d is not matching the given condition", num);
    }

    return 0;
}