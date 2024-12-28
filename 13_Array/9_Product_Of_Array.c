# include<stdio.h>
int main(){
    int arr[5]={1,2,5,2,5};
    int product=1;
    for (int i=0; i<=5-1; i++)
    {
        product*=arr[i];
    }
    printf("The product of the given array is : %d",product);
    return 0;
}