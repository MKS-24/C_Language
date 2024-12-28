#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
        // Ternary Operator
        
        // condition ? expression 1(ye) : expression 2(wo nh to ye);

        // num >= 1 ? num % 2 == 0 ? printf("Even Number") : printf("Odd Number"):printf("Not a valid case ");
        num % 2 == 0 ? printf("Even Number") : printf("Odd Number");  // jitni condition utnehi colon
        return 0;
}