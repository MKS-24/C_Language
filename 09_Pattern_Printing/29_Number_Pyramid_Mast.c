# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=a; j++)
        printf("  ");
        a--;
        int b=1;
        for(int k=1; k<=i; k++)
        {
            printf("%d ",b);
            b++;
        }
        int c=i-1;
        for(int l=2; l<=i ;l++)
        {
            printf("%d ",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}
