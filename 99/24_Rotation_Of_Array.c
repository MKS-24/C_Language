/*# include<stdio.h>

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
    int m;
    printf("Enter the Value of K(No. of rotation) [Remember K must be greater than n] : ");
    scanf("%d",m);
    if (m>n)
    {
        for ( int i=1; i<=k; i++)
        
    }

    // for(int i=0; i<= n-1; i++)
    // {
    //     printf("%d Element of arr[%d] : %d\n",i+1,i,arr[i]);
    // }
    return 0;

}*/
# include<stdio.h>
void fun (int arr[],int n,int starting_index,int ending_index)
{
    int i=starting_index;
    int j=ending_index;
    int a=0;
    while (i <= j)
    {
       int temp = arr[i];
        arr[i] =  arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
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
    int k;
    printf("Enter Value of 'K' : ");
    scanf("%d",&k);
    if(k>n) k = k%n;  // isliye ke rotations ko kam kare n=2, k=3,so k%n=>3%2=>1 rotation

    fun (arr,n,0,n-1);
    fun (arr,n,0,k-1);
    fun (arr,n,k,n-1);
    for(int i=0; i<= n-1; i++)
    {
        printf("%d Element of arr[%d] : %d\n",i+1,i,arr[i]);
    }
    return 0;

}