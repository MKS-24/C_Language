# include<stdio.h>
int main(){
    int arr[5];    // another way of declaration 
    printf("Enter First Element : ");
    scanf("%d",&arr[0]);
    printf("Enter Second Element : ");
    scanf("%d",&arr[1]);
    printf("Enter Third Element : ");
    scanf("%d",&arr[2]);
    printf("Enter Forth Element : ");
    scanf("%d",&arr[3]);
    printf("Enter Fifth Element : ");
    scanf("%d",&arr[4]);
    for(int i=0; i<=5-1; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}