# include<stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    int count=0;
    //  for(int i=1; i<=num ;i++)    // ye condition work nh kare gi QK last digit jab aaega tu loop nh chale ga
    // {
    //    num = num / 10;
    //     count++;
    //     if(num == 0) break;
    // }
    //                                                  sahih program niche wale hai
    
    for(int i=1; num>0 || num<0 ;i++)        // condition ye bhi lag sakhti hai  num != 0
    {
       num = num / 10;
        count++;
    }
    //                                                      OR
    // int i=0;
    // while(num>0 || num<0){   // condition ye bhi lag sakhti hai  num != 0
    // num = num/10;
    // count++;
    // i++;
    // }
    printf("Digits are : %d",count);
    return 0;
}