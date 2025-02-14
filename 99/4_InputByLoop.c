# include<stdio.h>
int main(){
    int n; 
    printf("How many Element you want to store : ");
    scanf("%d",&n);
    int arr[n];    // another way of declaration
   int i=0;
   while(i<=n-1)
   {
    printf("Enter %d Element : ",i+1);
    scanf("%d",&arr[i]);
    i++;
   }
   for ( int j=0; j<=n-1; j++)
   {
    printf("%d element is : %d\n",j+1,arr[j]);
   }
   return 0;
}