#include <stdio.h>
int main()
{
    char a ;
    printf("Enter Character age : ");
    scanf(" %c", &a );
    if(a >=65 && a <=90) printf("Entered Character is Capital Alphabet");
    else if(a >= 97  && a <= 122 ) printf("Entered Character is Small Alphabet");
    else if(a >= 48  && a <= 57 ) printf("Entered Character is Digit");
    else if((a >= 0  && a <= 47 ) || (a >= 58  && a <= 64 ) || (a >= 91  && a <= 96 ) || (a >= 123  && a<= 127 ))
    printf("Entered Character is Special Symbol");
    return 0;
}
  