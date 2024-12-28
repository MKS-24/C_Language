// Write a program that prints squares of the integer taken as input,
// until the square is less than 1000.
# include <stdio.h>
int main(){
    int num;
    for(int i=1; 1; i++)
    {
        printf("Enter Number : ");
        scanf("%d",&num);
        int a= num*num;
        if (a>1000) 
        {printf("Square of a Given Number is greater than 1000 therfore program terminate : %d\n",a);
        break;}
        else printf("Square of a Given Number is : %d\n",a);
    }
    printf("Thankyou");
    return 0;
}