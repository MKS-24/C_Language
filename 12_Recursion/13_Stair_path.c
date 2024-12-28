# include<stdio.h>
int stair(int n)  //    For one,two,and three steps stairs
{
    if (n<=3)
    {
        if(n<=2) return n;
        return n+1;
    } 

    int totalways = stair(n-1) + stair(n-2) +(n-3);
    return totalways;
}
int main(){
    int n;
    printf("Enter Number of stair : ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("Number of ways is : %d",ways);
    return 0;
}