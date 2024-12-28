# include<stdio.h>
int com(int n, int r)
{
    int a=n;
    int nfact=1;
    for(int i=1; i<=n; i++)
    {
        nfact*=a;
        a--;
    }
    int b=r;
    int rfact=1;
    for(int i=1; i<=r; i++)
    {
        rfact*=b;
        b--;
    }
    int nr =n-r;
    int c=nr;
    int nrfact=1;
    for(int i=1; i<=nr; i++)
    {
        nrfact*=c;
        c--;
    }
    int prod = nrfact * rfact;
    int ncr = nfact / prod;
    return ncr;
}

int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n-1;
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=a; j++)
        {
            printf("  ");
        }
        a--;
        for(int k=0; k<=i; k++)
        {
            int ncr = com(i,k);
            printf("%d   ",ncr);
        }
        printf("\n");
    }
    return 0;
}