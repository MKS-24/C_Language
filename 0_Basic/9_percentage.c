# include<stdio.h>
int main(){
    float mark1 = 35; 
    float mark2 = 36;
    float mark3 = 23;
    float mark4 = 35;
    float mark5 = 28;
    float percentage = (100 * (mark1 + mark2 + mark3 + mark4 + mark5)) / (40 * 5);
    printf("%f" ,percentage);
    return 0;
}