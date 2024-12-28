#include <stdio.h>
void leap(int n)
{
    if(n%4 == 0) printf("leap year");
    else printf("Not a leap year");
    return ;
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    leap(n);
 return 0;
}