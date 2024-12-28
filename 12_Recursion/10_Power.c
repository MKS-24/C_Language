# include<stdio.h>
int main(){
    int b,p;
    printf("Enter Base : ");
    scanf("%d",&b);
    printf("Enter Power : ");
    scanf("%d",&p);
    int powe(int b , int p);
    int power = powe(b,p);
    printf("%d raised to the power %d is : %d",b,p,power);
    return 0;
}
int powe(int b , int p)
{
    if(p==0) return 1;
    return b*powe(b,p-1);
}