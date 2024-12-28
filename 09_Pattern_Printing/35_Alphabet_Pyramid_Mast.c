# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=65;
    // char ch=(char) 65;  //Aese bhi work karega..
    char ch=(char) a;
    for(int i=1; i<=n*2-1; i++)   // b*2+1 bhi aaik hi baat hai
    {
        printf("%c ",ch);
        ch++;
    }
    printf("\n");
    int b=n-1;
    int x=1;
    for (int i=1; i<=n; i++) 
    {
        char c=(char) 65;
        for (int j=1; j<=b; j++)
        {
            printf("%c ",c);
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
            printf("%c ",c);
            c++;
        }
        printf("\n");
        b--;
        
    }
    return 0;
}