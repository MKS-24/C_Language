# include<stdio.h>
int main(){
    int n;
    printf("Enter the Number Of Element which you want to store : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++)
    {
        printf("Enter %d Element : ",i);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<=n-1; i++)
    {
        if(!(i % 2 == 0 ))  arr[i] *= 2;      // ! Not operator used kiya
        else  arr[i] += 10; 
    }
    for(int i=0; i<=n-1; i++)
    {
        printf("Element of arr[%d] is : %d\n",i,arr[i]);
    }
    return 0;
}