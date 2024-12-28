#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter Number of Row in each Lines : ");
    scanf("%d",&n);
    printf("Enter Number of Coulume in each Lines : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)         // Outer Loop -> No. of Line Batata OR No. of Row
    {
        for(int i=1;i<=m;i++){   // Inner Loop -> No. of star in each Line Or No. of Colume
            printf("* ");
        }
        printf("\n"); // her line ke baad Aik ENter marne ke liye
    }
    return 0;
    }