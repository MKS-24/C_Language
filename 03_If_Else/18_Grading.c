# include <stdio.h>
int main(){
    float percent;
    printf("Enter Percentage : ");
    scanf("%f",&percent);
    if(percent >= 90.00 && percent <=100 ) printf("Excellent");
    else if(percent >=80.00001 && percent <= 90) printf("Very Good");
    else if(percent >=70.00001 && percent <= 80) printf("Good");
    else if(percent >=60.00001 && percent <= 70) printf("Can do better");
    else if(percent >=50.00001 && percent <= 60) printf("Average");
    else if(percent >=40.00001 && percent <= 50) printf("Below Average");
    else if(percent >= 0 && percent <= 40) printf("Fail");
    else{if(percent<0 || percent > 100) printf("Not a correct percentage");}
    return 0;
}