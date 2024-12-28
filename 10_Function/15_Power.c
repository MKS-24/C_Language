#include <stdio.h>
// #include <stdio.h>
int ppower(int n, int r)
{
//    int x = pow(n,r);
    int a = 1;
    for (int i=1; i<=r; i++)
    {
        a *= n;
    }
    return a;
}
int main()
{
    int a,b;
    printf("Enter Base : ");
    scanf("%d", &a);
    printf("Enter Power : ");
    scanf("%d", &b);
    int power = ppower(a , b);
    printf("Answer is : %d",power);
 return 0;
}