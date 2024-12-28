#include <stdio.h>
int main()
{
    int num; // itni baar loop chale ga
    printf("Enter Number : ");
    scanf("%d", &num); //AP = 4,7,10,13,16,19,...
    for (int i = 4; i <= 4+(num-1)*3; i += 3)    // Tn = a+(n-1)d formula hita hai na 
    {
        printf("%d ", i);
    }
    return 0;
}