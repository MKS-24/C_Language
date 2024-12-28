# include<stdio.h>
int main(){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    if(year%4 == 0) 
    {
    printf("Give year '%d' is a leap year ",year); 
    }
    else 
    {
    printf("Give year '%d' is not a leap year",year);
    } 
    return 0;
    }
    // jab tak terminater nh lage ga line khatam nh hogi