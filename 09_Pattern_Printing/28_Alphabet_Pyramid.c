# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n-1;
    int z=1;
    for(int i=1; i<=n; i++)
    {
        int b=65;
        char c = (char)b;
        for(int j=1; j<=a; j++)
        printf("  ");
        a--;
        for(int k=1; k<=z; k++)
        {
            printf("%c ",c);
            c++;
        }
        z+=2;
        printf("\n");
    }
    return 0;
}