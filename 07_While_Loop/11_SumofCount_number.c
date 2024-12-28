# include <stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    int sum=0;
    int ld;
    // for(int i=1;num>0;i++){
        
    //     ld = num%10;
    //     sum+=ld;
    //     num/=10;  
    // }
    int i=1;
    while(num>0) // condition ye bhi lag sakhti hai  num != 0
    {   
        ld = num%10;
        sum+=ld;
        num/=10;  
    }
    printf("Sum is : %d",sum);
    return 0;
}