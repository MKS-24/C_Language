// Ques : Take integer as input and print half of the number.
# include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    // scanf("%d",&number);
    // float half = number / 2;     ye method wrong ans dega Qk int / int = int
    scanf("%d",&number);
    float half = number / 2.0;
    printf("Half of this number %d is : %f",number,half);
    return 0;
}