# include<stdio.h>
# include<limits.h>
int main(){
    int arr[7]={1,7,3,7,6,6,4};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=7-1; i++)
    {
        if(max<arr[i]) 
        {
            max = arr[i];
        }
        else if(smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    printf("Maximum Number is : %d\n",max);
    printf("Second Maximum Number is : %d",smax);
    return 0;
}