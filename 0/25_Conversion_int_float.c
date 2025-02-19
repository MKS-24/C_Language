# include<stdio.h>
int main(){
    // int operator int
    printf("x : %d\n",2 + 6);
    // int operator float
    printf("y : %d\n",2 + 3.0);
    // float operator float
    printf("z : %d\n",2.6 + 3.0);
    // int operator int
    printf("x : %f\n",2 + 6);
    // int operator float
    printf("y : %.2f\n",2 + 3.0);
    // float operator float
    printf("z : %.2f\n",2.6 + 3.0);
    return 0;
}
