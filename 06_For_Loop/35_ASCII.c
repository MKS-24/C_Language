#include <stdio.h>
int main()
{
    // for (char i ='A' ; i <= 'Z'; i++)
    // {
    //     printf("%c : %d\n",i,i);
    // }
    for (int i = 65; i <= 90; i++)
    {
        char z = (char)i;   //Type Casting
        printf("%c : %d\n", z, i);
    }

    return 0;
}