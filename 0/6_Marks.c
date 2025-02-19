# include<stdio.h>
int main(){
    int n; 
    printf("How many Element you want to store : ");
    scanf("%d",&n);
    int marks[n];    // another way of declaration
   int i=0;
   while(i<=n-1)
   {
    printf("Enter %d Marks : ",i+1);
    scanf("%d",&marks[i]);
    i++;
   }
   for ( int j=0; j<=n-1; j++)
   {
    if(marks[j] < 35) printf("Roll Number is : %d\n",j+1);
   }
   return 0;
}