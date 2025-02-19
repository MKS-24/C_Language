# include<stdio.h>
# include<stdbool.h>
int main(){
    int n;
    int arr[7] = {1,2,3,4,5,4,7};
    printf("Enter Number : ");
    scanf("%d",&n);
    bool flag = false;  // mean not present
    int idx = 1; // koi bhi value
    for(int i=0; i<=7-1; i++)
    {
        if(arr[i] == n) 
        {
            flag = true;  // mean present
            idx = i; 
        }
    }
    if (flag == true)
    printf("Element %d present in the given Array whose index is : arr[%d]",n,idx);
    else printf("Element %d is not present in the given Array",n);
    return 0;
}