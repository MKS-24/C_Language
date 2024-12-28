// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter Number of Row and Colume in each Lines : ");
//     scanf("%d",&n);
//     int a=1;
//     for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
//     {
//         for(int j=1;j<=a;j++){   // Inner Loop -> No. of star in each Line Or No. of Colume
//             printf("* ");
//         }
//         printf("\n"); // her line ke baad Aik Enter marne ke liye
//     a++;
//     }
//     return 0;
//     } 
//                     Another Method
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number of Row and Colume in each Lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
    {
        for(int j=1;j<=i;j++){   // Inner Loop -> No. of star in each Line Or No. of Colume
            printf("* ");
        }
        printf("\n"); // her line ke baad Aik Enter marne ke liye
    }
    return 0;
    } 