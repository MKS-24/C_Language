# include<stdio.h>
int main(){
    int r,c;
    printf("Enter Row : ");
    scanf("%d",&r);
    printf("Enter Colume : ");
    scanf("%d",&c);
    printf("Data Of 1st Matrix\n");
    int arr1[r][c];
    int x = 1;
    for(int i=0; i<=r -1; i++)
    {
        for(int j=0; j<=c- 1; j++)
        {
            printf("Enter %d Element of 1st Matrix : ",x);
            scanf("%d",&arr1[i][j]);
            x++;
        }
    }
    printf("Data Of 2nd Matrix\n");
    int arr2[r][c];
    int y = 1;
    for(int i=0; i<=r -1; i++)
    {
        for(int j=0; j<=c- 1; j++)
        {
            printf("Enter %d Element of 2st Matrix : ",y);
            scanf("%d",&arr2[i][j]);
            y++;
        }
    }
    int result[r][c];
     for(int i=0; i<=r -1;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=c-1; j++)  // Indicate => no.Of Colume
        {
           result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
     for(int i=0; i<=r-1;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=c-1; j++)  // Indicate => no.Of Colume
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}