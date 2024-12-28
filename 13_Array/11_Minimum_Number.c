# include<stdio.h>
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
    int min = arr[0];   // koi bhi arr[daal sakhte hai]
    for (int i=0; i<=n-1; i++)
    {
        if(arr[i] < min)   // {1,2,3}  arr[0] = 1
        min = arr[i];
    }
    printf("The Minimum Number is : %d",min);
    return 0;
}