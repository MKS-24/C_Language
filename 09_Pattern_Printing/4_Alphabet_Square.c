// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter Number of Row and Colume in each Lines : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
//     {
//         char a='A';
//         for(int j=1;j<=n;j++){   // Inner Loop -> No. of star in each Line Or No. of Colume
//             printf("%c ",a);
//             a++;
//         }
//         printf("\n"); // her line ke baad Aik Enter marne ke liye
//     }
//     return 0;
//     } 
    //                          Or
    #include <stdio.h> 
    int main()
{
    int n;
    printf("Enter Number of Row and Colume in each Lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
    {
        int a=1;
        for(int j=1;j<=n;j++){   // Inner Loop -> No. of star in each Line Or No. of Colume
            int z= a+64;
            char ch=(char)z;  // Type casting ki hai
            printf("%c ",z);
            a++;
        }
        printf("\n"); // her line ke baad Aik Enter marne ke liye
    }
    return 0;
    } 