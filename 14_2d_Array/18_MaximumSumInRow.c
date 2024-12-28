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
    int summax = INT_MIN;
    int row ;
    for(int i=0; i<=r-1;i++)  // Indicate => no.Of Row  
    {
        int sum = 0;
        for(int j=0; j<=c-1; j++)  // Indicate => no.Of Colume
        {
            sum += arr[i][j];
        }
        if(summax < sum) 
        {
            summax = sum;
            row = i+1;
        }
    }
    printf("The sum Of the Given Array is : %d ,and the row number is : %d",summax,row);
    return 0;
}