# include<stdio.h>
int stair(int n)  //    For one,two,three,four step stairs
{
    if (n<=4)
    {
        if(n<=2) return n; 
        else if(n==3) return n+1;
        return n+4;
    } 

    int totalways = stair(n-1) + stair(n-2) +(n-3)+(n-4);
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