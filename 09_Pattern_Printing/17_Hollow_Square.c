#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number of Rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==1)
            { 
                printf("* ");
            }
            else if((i>1 && i<n) && j==1 )
            {
                printf("* ");
            }
            else if((i>1 && i<n) && j==n )
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
       1 2 3 4 
     1 * * * *
     2 *     *
     3 *     *
     4 * * * *

    */
