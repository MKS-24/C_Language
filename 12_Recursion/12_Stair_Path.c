# include<stdio.h>
int stair(int n)  //    For onr and two steps stairs
{
    if (n<=2)
    {
        return n;
    } 

    int totalways = stair(n-1) + stair(n-2); 
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