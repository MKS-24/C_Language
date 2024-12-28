#include <stdio.h>
int main()  // arr[No. of Rows][No. of Colume]
{
    int arr[2][2] = {{1,2},{3,4}};
    // arr[0][0] = 1 ;
    // arr[0][1] = 2 ;   //   1  2 
    // arr[1][0] = 3 ;  //    3  4
    // arr[1][1] = 4 ;
    for(int i=0; i<=2-1/*(row no.)*/;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=2-1/*(colume no.)*/; j++)  // Indicate => no.Of Colume
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}