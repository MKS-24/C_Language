// # include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter first number : ");
//     scanf("%d",&a);
//     printf("Enter second number : ");
//     scanf("%d",&b);
//     void swap(int* a,int* b);
//     swap(&a,&b);
//     printf("a is : %d\n",a);
//     printf("b is : %d",b);
//     return 0;
// }
// void swap(int* a,int* b)
// {
//     int temp = *a;
//     *a = *b ;
//     *b = temp;
//     return ;
// }   
 //                               float bhi kersakhte
 # include<stdio.h>
int main(){
    float a,b;
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);
    void swap(float* a,float* b);
    swap(&a,&b);
    printf("a is : %f\n",a);
    printf("b is : %f",b);
    return 0;
}
void swap(float* a,float* b)
{
    float temp = *a;
    *a = *b ;
    *b = temp;
    return ;
}