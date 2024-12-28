#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n); 
    int a = 1;    // GP ka formula hota hai ar^n-1
    for (int i = 1; i <= n; i++)  //GP = 1,2,4,8,16,32
    {
        printf("%d ", a);
        a *= 2;
    }
    return 0;
}
