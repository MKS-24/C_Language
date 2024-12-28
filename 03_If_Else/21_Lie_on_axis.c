#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the Co-ordinate;\n");
    printf("x : ");
    scanf("%f", &x);
    printf("y : ");
    scanf("%f", &y);
    if (x == 0 && y != 0)
    {
        printf("Co-ordinate of y-axis");
    }
    else if (x != 0 && y == 0)
    {
        printf("Co-ordinate of x-axis");
    }
    else if (x == 0 && y == 0)
    {
        printf("Co-ordinate of origin");
    }
    else
    {
        printf("Co-ordinate of both axes");
    }
}