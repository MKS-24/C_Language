// # include<stdio.h>
// int main(){
//     int n;
//     printf("Enter Number : ");
//     scanf("%d",&n);
//     int i=1;
//     int a=n;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=a)
//         {
//             printf("%d ",j);
//             j++;
//         }
//         a--;
//         printf("\n");
//         i++;
//     }
// return 0;
// }
//                            Through For Loop
# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int a=n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=a; j++)
        {
        printf("%d ",j);
        }
        printf("\n");
        a--;
    }
   
    return 0;
}