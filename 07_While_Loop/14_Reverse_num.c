# include <stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    int ld;
    int r=0;
    for(int i=1;num>0;i++){ 
       ld=num%10;
        r*=10;
        r+=ld;           
        num/=10;
    }
    // int i=1;
    // while(num>0) // condition ye bhi lag sakhti hai  num != 0
    // {   
    //     ld=num%10;
    //     r*=10;
    //     r+=ld;           
    //     num/=10;   
    // }
    printf("Reverse is : %d",r);
    return 0;
}