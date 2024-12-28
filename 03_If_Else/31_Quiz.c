# include<stdio.h>
int main(){
    printf("============QUIZ============\n\n");
    printf("1. AI stands for ______.\n\n");
    printf("a. Computer Science\nb. Artificial Intelligence\nc. Mirza Ghalib\nd. Meer Dard\n");
    printf("Your Choice : ");
    char choice1;
    scanf("%c",&choice1);
    if(choice1 == 'b' || choice1 == 'B') printf("(Congratulate)\n");
    else printf("(Sorry)\n");

    printf("\n2. Physics is the branch of _______.\n\n");
    printf("a. Computer Science\nb. Science\nc. Zoology\nd. Chemistry\n");
    printf("Your Choice : ");
    char choice2;
    scanf(" %c",&choice2);
    if(choice2 == 'b' || choice2 == 'B') printf("(Congratulate)\n");
    else printf("(Sorry)\n");
    return 0;

}