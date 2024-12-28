# include<stdio.h>
int nnpr(int n,int r)
{
    int a=n;
    int nfact=1;
    for (int i=1; i<=n; i++)
    {
        nfact*=a;
        a--;
    }
    int bracket=n-r;
    int b=bracket;
    int nrfact = 1;
    for(int i=1; i<=bracket; i++)
    {
        nrfact*=b;
        b--;
    }
    int nnnpr=nfact / nrfact;
    return nnnpr;
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
        for (int k=0; k<=i; k++)
        {
            int npr = nnpr(i,k);
            printf("%d   ",npr);
        }
        printf("\n");
    }
    return 0;
}