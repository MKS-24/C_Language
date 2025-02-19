# include<stdio.h>
# include<limits.h>
int main(){
    int n;
    printf("How many Numbers in which you want to find the maximum number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1 ; i++)
    {
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = INT_MAX;   //INT_MAX bht bara number hai
    for (int i=0; i<=n-1; i++)
    {
        if(arr[i] < max)   // {1,2,3}  arr[0] = 1
        max = arr[i];
    }
    printf("The Minimum Number is : %d",max);
    return 0;
}
