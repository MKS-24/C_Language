# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    for ( int i=1; i<=n*2-1; i++)
    {
        int a=n;
        for(int j=1; j<=n*2-1; j++)
        {
            if( i==1 || i==n*2-1 || j==1 )
            printf("%d ",a);
        }
        a--;
        for(int k=1; k<=n*2-1; k++)
        {
            if( i==2 || k==2 || i==n*2-2 )
            printf("%d ",a);
        }
        a--;
        for(int l=1; l<=n*2-1; l++)
        {
            if( i==3 || l==3 || i==n*2-3 )
            printf("%d ",a);
        }
        
        printf("\n");
    }
    return 0;
}