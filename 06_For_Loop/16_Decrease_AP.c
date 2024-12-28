#include <stdio.h>
int main()
{
    int a = 100;   // a+(n-1)*d
    for (int i = 1; a > 0; i++)  //AP = 100,97,94,...
    {
        printf("%d ", a);
        a -= 3;
    }
    return 0;
}
