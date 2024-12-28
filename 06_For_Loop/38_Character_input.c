//Write a program that takes character input. 
// Terminate when ‘X’  is pressed.
# include <stdio.h>
int main(){
    char ch;
    for (int i=1; ch!='X' ; i++)
    {
    printf("Enter Character : ");
    scanf(" %c",&ch);
    }
    
    return 0;
}
