#include <stdio.h>
int main()
{
    int n,r;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);
    int com();   // call kiya function ko (prototype)
    int nncr = com( n,  r);
    printf("nCr is : %d",nncr);
    printf("\n\n\n");
    //// iske baad new number liye mene .....
    int k,l;
    printf("Enter n : ");
    scanf("%d", &k);
    printf("Enter r : ");
    scanf("%d", &l);
    int com();   // call kiya function ko (prototype)
    int x = com( k,l);
    printf("nCr of k and l is : %d",x);
    printf("\n\n\n");
    int f,g;
    printf("Enter f : ");
    scanf("%d",&f);
    printf("Enter g : ");
    scanf("%d",&g);
    int com( );
    int mm=com(f,g);
    printf("nCr is : %d",mm);

    return 0;
}
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