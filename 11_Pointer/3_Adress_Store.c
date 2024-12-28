#include <stdio.h>
int main()
{
    int a = 1035;
    int* x = &a;
    *x = 32;
    printf("Adress is : %d\n", a); // *x ki value change ki to a ki value bhi change
    printf("Adress is : %p\n", &a); // & is address and %p is formate specifier
    printf("Adress is : %d\n", *x); // Ager me *x print karo to a ki (value) print hogi
    printf("Adress is : %p\n", x);  // Ager me x print karo to a Ka (Adress) print hoga
    printf("Adress is : %p\n", &x);  // Ager me &x print karo to x Ka (Adress) print hoga
    return 0;                       
}                                   