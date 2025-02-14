# include<stdio.h>
int main(){
    int n;
    int arr[7] = {1,2,3,4,3,4,7};
    printf("Enter Number : ");
    scanf("%d",&n);
    int x=0;
    for(int i=0; i<=7-1; i++)
    {
        if(arr[i] == n) x++ ;
    }
    printf("Entered Element %d in the given array present in %d places",n,x);
    return 0;
}