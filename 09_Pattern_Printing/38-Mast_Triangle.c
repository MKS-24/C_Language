# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n;
    for (int i=1; i<=n; i++)
    {
        for (int j=2; j<=i; j++)
        {
            printf("  ");
        }
        for (int k=1; k<=a; k++)
        {
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}