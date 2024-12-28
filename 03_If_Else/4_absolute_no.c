// # include<stdio.h>
// int main(){
//     int num;
//     printf("Enter num : ");
//     scanf("%d",&num); 
//     if ( num < 0)
//     {
//         printf("%d",num * (-1)); // number 0 se chota negetive hi hota hai
//     }
//     else{
//         printf("%d",num);
//     }
//     return 0;
//     }
    //                              oR
# include<stdio.h>
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num); 
    if ( num < 0)  // number 0 se chota negetive hi hota hai
    {
        num = num * (-1);
    }
        printf("%d",num);
    return 0;
    }