// # include <stdio.h>
// int main(){
//    for(int i=1; i<=30 ; i++){
//     printf("%d,",i);
//    }
//     return 0;
// }

# include <stdio.h> //	1,2,2,3,3,4,4,5,…..50
int main(){
    // printf("1");
    int a = 2;
   for(int i=1; i<=50 ; i++){
    printf("%d,%d,",i,a);
    a++;
   }
    return 0;
}

// # include <stdio.h>
// int main(){
//     int a=0;
//     int b=1;
//     int sum=1;
//     printf("0 ");

//    for(int i=1; i<=100 ; i++){
//     printf("%d ",sum);
//     sum = a+b;
//     a=b;
//     b=sum;
//    }
//     return 0;
// }