# include<stdio.h>
int main(){
    int r,c;
    printf("Enter Number Of Student : ");
    scanf("%d",&r);
    c=3;
    int arr[r][c];
    for(int i=0; i<=r-1; i++)
    {
        printf("Data Of %d Student\n",i+1);
        for(int j=0; j<=c-1; j++)
        {
            printf("Enter %d Marks : ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<=r-1; i++)
    {
        for(int j=0; j<=c-1; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}