#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int a=1;
    int b=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++) // j<=i bhi hota tu program run kerta
        {                            // Another method
            printf("%d ",b);  
            b+=2; 
        }
        printf("\n");
        a++;
    }

    return 0;
}