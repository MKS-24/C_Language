# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int x=n-1;
    for(int i=1; i<=n; i++)
    {
        int a = 65;
        char b = (char)a;    // Type Casting ki hai.
        for(int j=1; j<=x; j++)
        {
            printf("  ");
            
        }
        x--;
        for(int k=1; k<=i; k++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}