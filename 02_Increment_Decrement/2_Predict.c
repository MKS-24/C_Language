#include <stdio.h>
int main()
{
    int x=4,y=3,z;
    z=x-- - y;   // 4-3=1  //x=3,y=3,z=1
    printf("\n%d  %d  %d",x,y,z);
    return 0;
}