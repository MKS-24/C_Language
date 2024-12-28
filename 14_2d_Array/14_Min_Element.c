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
    int min = INT_MAX;
    for(int i=0; i<=r-1;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=c-1; j++)  // Indicate => no.Of Colume
        {
            if( min > arr[i][j]) min = arr[i][j];
        }
    }
    printf("The Minimum Number Of the Given Array is : %d",min);
    return 0;
}