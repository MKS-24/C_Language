# include<stdio.h>
int main(){
    float a,b=6,c;
    c = b + a;
    //float me only a = 0 hota jo add ke baad new value me kuch farq nh parhta
   // lkn int me garbage value dedeta
    printf("c is : %.2f\n",c);
    printf("a is : %.2f\n",a);
    return 0;
}