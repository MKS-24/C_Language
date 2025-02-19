# include<stdio.h>
int main(){
    char character;
    printf("Enter character : ");
    scanf("%c",&character);
    printf("character is : %d",(character >=  '0') && (character <= '9'));
    return 0;
}
