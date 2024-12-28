#include <stdio.h>
float aavg(float *a, float *b, float *c)
{
    float x = (*a + *b + *c) / 3;
    return x;
}
float per(float *a, float *b, float *c)
{
    float v = (*a + *b + *c) * 100;
    float z = v / 300;
    return z;
}
int main()
{
    float a, b, c;
    printf("Enter marks of 1st subject : ");
    scanf("%f", &a);
    printf("Enter marks of 2nd subject : ");
    scanf("%f", &b);
    printf("Enter marks of 3rd subject : ");
    scanf("%f", &c);
    float x = aavg(&a, &b, &c);
    float perc = per(&a, &b, &c);
    printf("average of three suject is : %.2f\n", x);
    printf("percentage of three suject is : %.2f", perc);

    return 0;
}