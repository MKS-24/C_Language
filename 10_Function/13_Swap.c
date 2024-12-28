#include <stdio.h>
void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    swap(a,b);     // Work nh kare ga QK Pass by reference nh howa [Pointer ka concept hai bhai]
    printf("The Value of a is : %d\n",a);
    printf("The Value of b is : %d",b);
    return 0;
}