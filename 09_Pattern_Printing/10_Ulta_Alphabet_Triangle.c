# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int i=1;
    int a=n;
    while(i<=n)
    {
        char alpha='A';
        int j=1;
        while(j<=a)
        {
            printf("%c ",alpha);
            alpha++;
            j++;
        }
        a--;
        printf("\n");
        i++;
    }
return 0;
}
//                            Through For Loop
// # include<stdio.h>
// int main(){
//     int n;
//     printf("Enter Number : ");
//     scanf("%d",&n);
//     int a=n;
    
//     for(int i=1; i<=n; i++)
//     {
//         char alpha = 'A';
//         for(int j=1; j<=a; j++)
//         {
//         printf("%c ",alpha);
//         alpha++;
//         }
//         printf("\n");
//         a--;
//     }
   
//     return 0;
// }