# include<stdio.h>
int main(){
    int n;
    printf("Enter Number Odd number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int a= n/2+1;   // isliye QK  ager user 5 press kare to n/2+1 = 5/2 +1 =3 per print kare ga
            if(i==a || j==a)
            {
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
