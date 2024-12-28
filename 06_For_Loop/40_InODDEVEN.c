// Write a program that prints squares of the integer taken as input,
// until the square is less than 1000.
// # include <stdio.h>
// int main(){
//    for(int i=1; i<=50 ; i++){
//     if(i%2==0) printf("%d,",i);
//     // else printf("%d ",i);
//    }
//     return 0;
// }
# include <stdio.h>
int main(){
   for(int i=1; i<=50 ; i++){
    if(i%2!=0) printf("%d,",i);
   }
    return 0;
}