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
            scanf("%d",&arr[i][j]);
        }
    }
    int n1,m1,n2,m2;
    printf("Enter First Cordinate : ");
    scanf("%d %d",&n1,&m1);
    printf("Enter Second Cordinate : ");
    scanf("%d %d",&n2,&m2);
    int sum = 0;
    for(int i=n1; i<=n2;i++)  // Indicate => no.Of Row  
    {
        for(int j=m1; j<=m2; j++)  // Indicate => no.Of Colume
        {
            sum += arr[i][j];
        }
    }
    printf("The sum Of the Given Array is : %d",sum);
    return 0;
}