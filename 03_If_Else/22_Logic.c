#include <stdio.h>
int main()
{
    int num,a,c;
    // char ch = 'd';
    if (1) printf("yes\n"); // (1,2,3,4,5...) means True and 0 means False
    if (0) printf("working\n"); // output nh karega qk false (0) hai
    if(a=10) printf("Also work\n");
    if(3 + 2 % 5) printf("kergaya work\n"); 
    if((3 + 2) % 5) printf("hello pizza\n"); //output nh karega qk false (0) hai
    if('c') printf("wow\n");  // output hoga show Qk character 'c' ki value 99 hoti
    // if(ch) printf("just wow\n");  // output hoga show Qk character 'd' ki value 100 hoti aur ch = 'd' mean c = 100
    if(c) printf("hello world\n");  // output hoga show koi bhi garbage value aajaegi
    printf("%d\n",c);
    // agar char me koi bhi value declare nh krra to 
    //if(c) printf("hello world\n"); 
    //ye chalra hai;
    // agar char me koi bhi value declare krra hu to 
    //if(c) printf("hello world\n"); 
    //ye nh chalra hai; c = 0 hora

    return 0;
}
