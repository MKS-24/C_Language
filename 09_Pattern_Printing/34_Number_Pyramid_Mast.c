# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n*2-1; i++)   // b*2+1 bhi aaik hi baat hai
    {
        printf("%d ",a);
        a++;
    }
    printf("\n");
    int b=n-1;
    int x=1;
    for (int i=1; i<=n; i++) 
    {
        int c=1;
        for (int j=1; j<=b; j++)
        {
            printf("%d ",c);
            c++;
        }
        for (int k=1; k<=x; k++)
        {
            printf("  ");
            c++;
        }
        x+=2;
        for (int l=1; l<=b; l++)
        {
            printf("%d ",c);
            c++;
        }
        printf("\n");
        b--;
        
    }
    return 0;
}