# include<stdio.h>
int main(){
    int x = 2*3/4 + 4/4 + 8 - 2 + 5/8;
    // is case me sb se pehle + and - me break kerna hai
    // then left to right (---->) operation chale ge * and / ke
    printf("%d",x);
    return 0;
}