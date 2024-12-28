# include<stdio.h>
# include<limits.h>
int main(){
    int r,c;
    printf("Enter No. of Rows : ");
    scanf("%d",&r);
    printf("Enter No. of Colume : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<=r-1; i++)
    {
        for(int j=0; j<= c-1; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max = INT_MIN;
    for(int i=0; i<=r-1;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=c-1; j++)  // Indicate => no.Of Colume
        {
            if( max < arr[i][j]) max = arr[i][j];
        }
    }
    printf("The Maximum Number Of the Given Array is : %d",max);
    return 0;
}