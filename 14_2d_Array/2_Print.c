#include <stdio.h>
int main()  // arr[No. of Rows][No. of Colume]
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0; i<=3-1/*(row no.)*/;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=3-1/*(colume no.)*/; j++)  // Indicate => no.Of Colume
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}