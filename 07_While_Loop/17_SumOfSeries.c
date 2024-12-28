# include <stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    int odd=0,even=0;
    int sum=0;
    // for(int i=1;i<=num;i++)      // 1-2+3-4+5-6+7-8+9-.....= ?
    // {
    //     sum+=i;
    //     if(i%2!=0)   // formula -n/2
    //     {
    //         odd+=i;
    //     }
    //     else //if(num%2==0)
    //     {
    //         even+=i;
    //     }
    // }
    //                           OR
    int sumoe=0;
    if(num%2==0) 
    {
        sumoe =-num/2;
    }
    else if(num%2!=0) 
    {
        sumoe=(-num/2) + num;      //Formula hai odd num ka
    }

    printf("Sum of Even-Odd is : %d",sumoe);
    // printf("\nOverall sum is : %d",sum);
    return 0;
}