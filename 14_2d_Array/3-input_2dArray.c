# include<stdio.h>
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
            printf("Enter Number : ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<=r-1;i++)  // Indicate => no.Of Row  
    {
        for(int j=0; j<=c-1; j++)  // Indicate => no.Of Colume
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}