#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    // for (int i = 1; i <=1+(n-1)*2; i+=2)  // Tn = a+(n-1)d formula hita hai na 
    // {
    //     printf("%d ",i);
    // }
    //         Another method
    int a = 1 ;
    for (int i = 1; i <= n; i ++)   //AP = 1,3,5,7,9,11,...
    {
        printf("%d ", a);
        a+=2;
    }
    return 0;
}

