# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n-1;
    for (int i=0; i<=n; i++)
    {
        int first =1;
        for (int j=0; j<=a; j++)
        {
            printf("  ");
        }
        a--;
        for(int k=0; k<=i; k++)
        {
           printf("%d   ",first);
           first = first *(i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}