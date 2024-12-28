# include<stdio.h>
int main(){
    int x=1,y=2,z=3;
    int* a=&x ;
    int* b=&y; 
    int* c=&z;
    void swap(int* x,int* y,int* z);
    swap(a,b,c);
    printf("x is : %d\n",x);
    printf("y is : %d\n",y);
    printf("z is : %d",z);
    return 0; 
}
void swap(int* x,int* y,int* z)
{
    int temp = *z;
    int temp2 = *y;
    *y = *x;
    *z = temp2;
    *x = temp;
    return;
}