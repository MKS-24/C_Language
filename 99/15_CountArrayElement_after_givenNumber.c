# include<stdio.h>
int main(){
    int x;
    printf("Enter Number less then 10 : ");
    scanf("%d",&x);
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int count = 0;
    int sum =0;
    for (int i=0; i<=10-1; i++)
    {
        if(i>x)
        {
            count++;
            sum += arr[i];
        }
    }
    printf("Rest of the Element in the given array is : %d\nSum is : %d",count,sum);
    return 0;
}