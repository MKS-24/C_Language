

//                                 Working ( But Not A Correct Method )

# include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n-1;
    int x = 1;
    for(int i=1; i<=n; i++)
    {
        
        for(int j=1; j<=a; j++)
        {
            printf("  ");
        }
        for(int k=1; k<=x; k++)
        {
            
            printf("* ");
        }
        printf("\n");
        a--;
        x+=2;
    }
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("  ");
        }
        for(int k=1; k<=x-4; k++)
        {
            printf("* ");
        }
        x-=2;

        printf("\n");
    }
    return 0;
}