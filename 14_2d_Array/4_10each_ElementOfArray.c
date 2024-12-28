#include <stdio.h>
int main()  
{
    int arr[5][5];
    
    for(int i=0; i<=5-1;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=5-1; j++)  // Indicate => no.Of Colume
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0; i<=5-1;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=5-1; j++)  // Indicate => no.Of Colume
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}