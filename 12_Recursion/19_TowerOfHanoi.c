//            how many minimum ways,,,
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int a=2;
    int tower(int n, int a);
    int ways =  tower(n , a) - 1;
    printf("Total no. of ways are : %d",ways );
    return 0;
}
int tower(int n, int a)
{
   if (n == 0) return 1; 
   int ways = a * tower( n-1,  a);
   return  ways;
}
