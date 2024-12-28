#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n); 
    int a = 3;    // GP ka formula hota hai ar^n-1
    for (int i = 1; i <= n; i++)  //GP = 3,12,48,...
    {
        printf("%d ", a);
        a *= 4;
    }
    return 0;
}
