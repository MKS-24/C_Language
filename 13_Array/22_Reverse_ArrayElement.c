# include<stdio.h>
void fun (int arr[],int n)
{
    int i=0;
    int j=n-1;
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
    fun (arr,n);
    for(int i=0; i<= n-1; i++)
    {
        printf("%d Element of arr[%d] : %d\n",i+1,i,arr[i]);
    }
    return 0;

}