# include<stdio.h>
int main(){
    int n;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    int a=1;
    int b=n-1;
    for (int  i=1; i<=b*2+1; i++)
    {
        printf("* ");
    }
    printf("\n");
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=b; j++)
        {
            printf("* ");
        }
        for(int k=1; k<=a; k++)
        {
            printf("  ");
        }
        a+=2;
        for (int l=1; l<=b; l++)
        {
            printf("* ");
        }
        printf("\n");
        b--;
    }
    return 0;
}