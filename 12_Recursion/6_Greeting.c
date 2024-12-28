# include<stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    void greeting(int n);
    greeting(n);
    return 0;
}
void greeting(int n)
{
    if(n==0) return;
    printf("Hello, Nice to meet you?\n");
    greeting(n-1);
    return;
}