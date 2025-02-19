# include<stdio.h>
int main(){
    int n;
    int arr[7] = {1,2,3,3,3,4,7};
    int x=0;
    for(int i=0; i<=7-1; i++)
    {
        for(int j=i+1; j<=7-1; j++)
        {
            if(arr[i] == arr[j])
            printf("%d is the duplicate element\n",arr[i]);
        }
    }
    return 0;
}