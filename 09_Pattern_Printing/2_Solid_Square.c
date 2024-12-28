#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number of Row and Colume in each Lines : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
    {
        for(int i=1;i<=n;i++){   // Inner Loop -> No. of star in each Line Or No. of Colume
            printf("* ");
        }
        printf("\n"); // her line ke baad Aik ENter marne ke liye
    }
    return 0;
    }