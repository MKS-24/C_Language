# include <stdio.h>
int main (){
    int a=1;
    int b=1;
    printf("Adress is : %p\n",&a); // & is address and %p is formate specifier
    printf("Adress is : %p",&b); // & is address and %p is formate specifier
    return 0;
}