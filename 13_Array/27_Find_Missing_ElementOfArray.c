#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for (int i=0; i<=n-1;i++)
    {
        arr[i] = i+1;
        sum += arr[i]; 
    }
    int sum2 = 0;
    for (int i=0; i<=n;i++)
    {
        arr[i] = i+1;
        sum2 += arr[i]; 
    }
    int element = sum2 - sum;
    printf("Missing Element is : %d",element);
    return 0;
}