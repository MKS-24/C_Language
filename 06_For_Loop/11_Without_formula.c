#include <stdio.h>
int main()
{
    int num; // itni baar loop chale ga
    printf("Enter Number : ");
    scanf("%d", &num);   //AP = 4,7,10,13,16,19,...
    int a = 4;
    for (int i = 1; i <= num; i ++)    // Tn = a+(n-1)d formula hita hai na 
    {
        printf("%d ", a);
        a+=3;
    }
    return 0;
}