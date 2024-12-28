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
    int max = arr[0];   
    for (int i=0; i<=n-1; i++)
    {
        if(max < arr[i])
        max = arr[i];
    }
    printf("The Maximun Number is : %d",max);
    return 0;
}