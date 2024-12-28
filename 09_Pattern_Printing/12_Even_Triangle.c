// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter Number : ");
//     scanf("%d", &n);
//     int a=1;
//     for (int i = 1; i <= n; i++)
//     {
//         int b=2;
//         for (int j = 1; j <= a; j++)
//         {
//             printf("%d ",b);  
//             b+=2; 
//         }
//         printf("\n");
//         a++;
//     }

//     return 0;
// }
//                                   OR
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int b=0;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",b);  
            b+=2; 
        }
        printf("\n");
    }

    return 0;
}