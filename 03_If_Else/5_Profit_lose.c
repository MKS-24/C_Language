# include<stdio.h>
int main(){
    float cost,sell,profit,loss;
    printf("Enter cost price Rs : ");
    scanf("%f",&cost);
    printf("Enter selling price Rs : ");
    scanf("%f",&sell);
    if(sell > cost){
        profit = sell - cost;
        printf("You are in profit of Rs : %.2f",profit);
    }
    else if(sell == cost){
        printf("You are not in loss and not in profit");
    }
    else if(sell < cost){
        loss = cost - sell;
        printf("You are in loss of Rs : %.2f",loss);
    }
    return 0;
}