# include <stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1; i<=n; i++)
    {
        char b='A';
        for(int j=1; j<=a; j++)
        {
            if(a%2!=0)
            {
            printf("%d ",j);
            } 
            else printf("%c ",b);
            b++;
        }
        printf("\n");
        a++;
    } 
    return 0;
}