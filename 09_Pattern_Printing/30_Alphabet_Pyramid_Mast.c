# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=a; j++)
        printf("  ");
        a--;
        int ch_num = 65;
        char ch=(char) ch_num;
        for(int k=1; k<=i; k++)
        {
            printf("%c ",ch);
            ch++;
        }
        int c=i+63;       // QK 2+63 = 65 and 65 = A; 
        char character=(char)c;
        for(int l=2; l<=i ;l++)
        {
            printf("%c ",character);
            character--;
        }
        printf("\n");
    }
    return 0;
}












