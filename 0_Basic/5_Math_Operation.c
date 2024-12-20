# include<stdio.h>
int main(){
    int x; // variable declare krdiya
    x = 5;
    printf("%d\n",x); // x = 5
    x = x + 10;    // x = 5 + 10 = 15
    printf("%d\n",x);
    x = x * 2;  // x = 15 * 2 = 30
    printf("%d\n",x);
    x = x / 2;  // x = 30 / 2 = 15
    printf("%d\n",x);
    x = x - 5;   // x = 15 - 5 = 10
    printf("%d\n",x);
    int y = 2; // y = 2
    printf("%d\n",y);  
    int z = x / y; // z = 10 / 2 = 5 
    printf("%d\n",z); 
    return 0;
}