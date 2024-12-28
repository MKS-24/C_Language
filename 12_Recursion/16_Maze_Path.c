# include<stdio.h>
int maze (int c,int r)
{
    int rightways=0;
    int downways=0;
    if (c==1 && r==1) return 1;
    else if (r==1)  // cant go down
    {
        rightways += maze( c-1,r);  // col kam hoga 1 se;
    }
    else if (c==1)  // cant go down
    {
        downways += maze( c,r-1);  // col kam hoga 1 se;
    }
    if (r>1 && c>1)
    {
        rightways += maze( c-1,r);
        downways += maze( c,r-1);
    }
    int totalways=rightways + downways;
    return totalways;
}
int main(){
    int c,r;
    printf("Enter Number of Rows : ");
    scanf("%d",&r);
    printf("Enter Number of Colome : ");
    scanf("%d",&c);
    int noOfWays = maze(r,c);
    printf("Total no. of ways are : %d",noOfWays);
    return 0;
}