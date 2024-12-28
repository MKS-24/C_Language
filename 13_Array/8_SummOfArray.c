# include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,9};
    int sum=0;
    for (int i=0; i<=5-1; i++)
    {
        sum+=arr[i];
    }
    printf("The sum of the array is : %d",sum);
    return 0;
}