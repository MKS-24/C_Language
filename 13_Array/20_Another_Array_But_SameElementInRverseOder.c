# include<stdio.h>
int main(){
    int n;
    printf("How many Element you want to Enter : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++)
    {
        printf("Enter %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int brr[n];
    int a= n-1;
    for(int i=0 ; i<=n-1; i++)
    {
        brr[i] = arr[a];
        a--;
    }
    for(int i=0; i<=n-1; i++)
    {
        printf("%d Element of brr[%d] : %d\n",i+1,i,brr[i]);
    }
    return 0;

}