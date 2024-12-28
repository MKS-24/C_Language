# include<stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    int a = 1;
    int b = 1;
    int sum = 0;
    for(int i=1; i<=num-2 ; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        
    }
    if (num <= 0) printf("Invalid Number");
    else if(num==1 || num==2) printf("1");
    else printf("The Fibonacci Number is : %d",sum);

    return 0;
}