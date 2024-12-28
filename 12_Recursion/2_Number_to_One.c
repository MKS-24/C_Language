#include <stdio.h>
// void num(int n)
// {
//     if (n == 1)
//     {
//         printf("%d", n);
//         return;
//     }
//     printf("%d\n", n);
//     num(n - 1);
//     return;
// }
//             Dono se work kerraha hai..
int num(int n)
{
    if (n == 1)
    {
        printf("%d\n", n);
        return 1;
    }
    printf("%d\n", n);
    return num(n - 1);
}
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    num(n);
    return 0;
}