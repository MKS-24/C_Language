// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter Number of Row and Colume in each Lines : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
//     {
//         for(int j=n;j>=i;j--){   // Inner Loop -> No. of star in each Line Or No. of Colume
//             printf("* ");
//         }
//         printf("\n"); // her line ke baad Aik Enter marne ke liye
//     }
//     return 0;
//     } 
    //                           OR
//     #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter Number of Row and Colume in each Lines : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
//     {
//         for(int j=1;j<=n+1-i;j++){   // Inner Loop -> No. of star in each Line Or No. of Colume
//             printf("* ");
//         }
//         printf("\n"); // her line ke baad Aik Enter marne ke liye
//     }
//     return 0;
//     } 
    //                      n+1-i ka formula bana hai
    //    i=1  * * * *   j=4
    //    i=2  * * *     j=3     i+j=5     , therefore i+j=n+1
    //    i=3  * *       j=2
    //    i=4  *         j=1    
    //                            OR
    #include<stdio.h>
    int main()
{
    int n;
    printf("Enter Number of Row and Colume in each Lines : ");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
    {
        for(int j=1;j<=a;j++){   // Inner Loop -> No. of star in each Line Or No. of Colume
            printf("* ");
        }
        a--;
        printf("\n"); // her line ke baad Aik Enter marne ke liye
    }
    return 0;
    }  
    //                through While loop
    # include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int i=1;
    int a=n;
    while(i<=n)
    {
        int j=1;
        while(j<=a)
        {
            printf("* ");
            j++;
        }
        a--;
        printf("\n");
        i++;
    }
    return 0;
}