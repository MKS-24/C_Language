#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter Number of Rows : ");
    scanf("%d", &n);
    printf("Enter Number of Column : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(i==1)
            { 
                printf("* ");
            }
            else if((i>1 && i<n) && j==1 )
            {
                printf("* ");
            }
            else if((i>1 && i<n) && j==m )
            {
                printf("* ");
            }
            else if(i==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
           
        }
        printf("\n"); 
    }
    return 0;
    
}
    /*
       1 2 3 4 5 6
     1 * * * * * *
     2 *         *
     3 *         *
     4 * * * * * *

    */
