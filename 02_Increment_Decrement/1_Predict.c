#include <stdio.h>
int main()
{
    int x=4,y,z;
    y=--x;   //3=y=x
    z=x--;   //3= z, x =2
    printf("\n%d  %d  %d",x,y,z);
    return 0;
}