# include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=a; j++)
        {
            printf("  ");
        }
        for(int k=1; k<=n; k++)
        {
            printf("* ");
        }
        printf("\n");
        a--;
    }
    return 0;
}