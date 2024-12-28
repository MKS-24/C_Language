#include <stdio.h>
int main(){
int n;
printf("Enter Number : ");
scanf("%d",&n);
    float a = 100;   // a+(n-1)*d
    // float isliye Qk series me point me valuse aaegi aage chal ke
    for (int i = 1; i<=n ; i++)  //AP = 100,50,25,...
    {
        printf("%d ", a);
        a /= 2;
    }
    return 0;
}
