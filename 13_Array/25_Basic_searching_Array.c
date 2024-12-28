# include<stdio.h>
int main(){
    int n;
    int arr[7] = {1,2,3,4,5,4,7};
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int i=0; i<=7-1; i++)
    {
        if(arr[i] == n) printf("Giving Element is an index Of Array is : arr[%d]\n",i);
    }
    return 0;
}