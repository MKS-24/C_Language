#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter first point;\n");
    printf("x1 : ");
    scanf("%f", &x1);
    printf("y1 : ");
    scanf("%f", &y1);
    printf("Enter second point;\n");
    printf("x2 : ");
    scanf("%f", &x2);
    printf("y2 : ");
    scanf("%f", &y2);
    printf("Enter third point;\n");
    printf("x3 : ");
    scanf("%f", &x3);
    printf("y3 : ");
    scanf("%f", &y3);
    float slope12 = (y2 - y1) / (x2 - x1);
    float slope23 = (y3 - y2) / (x3 - x2);
    if (slope12 == slope23)
    {
        printf("Points lie on a line");
    }
    else
    {
        printf("Points doesn't lie on a line");
    }
    return 0;
}