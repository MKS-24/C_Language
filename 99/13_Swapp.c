# include<stdio.h>
void fun( int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

}
int main(){
    int arr[2] = {1,2};
    printf("arr[0] is %d and arr[1] is %d\n",arr[0],arr[1]);
    fun (arr);
    printf("arr[0] is %d and arr[1] is %d\n",arr[0],arr[1]);
    return 0;
}    