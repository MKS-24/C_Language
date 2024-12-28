#include <stdio.h>
int main()
{
    float percent;
    printf("Enter Percentage : ");
    scanf("%f", &percent);
    if (percent >= 90.0001)
    {
        if (percent <= 100)
        {
            printf("Excellent");
        }
        else
        {
            printf("Not a valid percentage");
        }
    }
    else if (percent >= 80.0001)
    {
        if (percent <= 90)
        {
            printf("Very Good");
        }
    }
    else if (percent >= 70.0001)
    {
        if (percent <= 80)
        {
            printf("Good");
        }
    }
    else if (percent >= 60.0001)
    {
        if (percent <= 70)
        {
            printf("Can do much better");
        }
    }
    else if (percent >= 50.0001)
    {
        if (percent <= 60)
        {
            printf("Average");
        }
    }
    else if (percent >= 40.0001)
    {
        if (percent <= 50)
        {
            printf("Belew Average");
        }
    }
    else if (percent <= 40)
    {
        if (percent >= 0)
            printf("Fail");
        else
            printf("Not a Valid Percentage");
    }
    return 0;
}