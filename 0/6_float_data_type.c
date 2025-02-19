# include<stdio.h>
int main(){
    float x = 5;
    float y = 2;
    float z = x / y ;
    printf("%f\n",z);
    z = 5 / 2 ;
    printf("%f\n",z); // QK integer divide( / ) integer se integer bnta
    z = 5.0 / 2 ;
    printf("%f\n",z);
    z = 5 / 2.0 ;
    printf("%f\n",z);
    int k = 5.0 / 2;
    printf("%d\n",k);
    k = 5 / 2;
    printf("%d\n",k);
    return 0;
}