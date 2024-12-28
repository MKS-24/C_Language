#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter Odd Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<= n; j++)
        {
            if (j == i || i+j == n+1)
           printf("* ");
           else printf("  ");
        }
        printf("\n");
    }
    return 0;
}
/*
   1 2 3 4
 1 * * * *
 2 *     *
 3 *     *
 4 * * * *

*/
