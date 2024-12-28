# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n; i++)
    {  
        printf("%d ",a);
        a++;
    }
    int b = a-2;
    for(int i=1; i<=n-1; i++)
    {
        printf("%d ",b);
        b--;
    }
    printf("\n");
    int x=n-1;
    int y=1;
    
    for(int i=1; i<=n; i++)
    {
        int z=n-1;
        int c=1;
        for(int j=1; j<=x; j++)
        {
            printf("%d ",c);
            c++;
        }
        for(int k=1; k<=y; k++)
        {
            printf("  ");
           
        }
        c--;
        for (int l=1; l<=x; l++)
        {
            printf("%d ",c);
            c--;
        }
        y+=2;
        printf("\n");
        x--;
    }
    return 0;
}