#include <stdio.h>
void england()
{
    printf("Hello\n");
    return;
}
void pakistan()
{
    printf("Assalam o Alikum\n");
    england();   //          yaha function ko call ki hai function me ....
    return;
}
int main()
{
england();


pakistan();
    return 0;
}