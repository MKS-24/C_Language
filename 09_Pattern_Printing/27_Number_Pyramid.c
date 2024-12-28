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
        int z=1;
        
        for(int j=1; j<=a; j++)
        {
            printf("  ");
        }
        for(int k=1; k<=x; k++)
        {
            
            printf("%d ",z);
            z++;
        }
        printf("\n");
        a--;
        x+=2;
    }
    return 0;
}