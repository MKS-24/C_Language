// Write a program that takes character input unless Enter is pressed 
// print total number of inputs by the user.
# include <stdio.h>
int main(){
    char ch;
    int a=0;
    printf("Enter Character : ");
    for (int i=1; 1 ; i++)
    {
    ch = getchar();
    a++;
    if(ch == '\n') break;
    }
    return 0;
}
