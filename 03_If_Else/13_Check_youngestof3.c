#include <stdio.h>
int main()
{
    int hamza, ali, usman;
    printf("Enter Hamza age : ");
    scanf("%d", &hamza);
    printf("Enter Ali age : ");
    scanf("%d", &ali);
    printf("Enter Usman age : ");
    scanf("%d", &usman);
    if (usman < ali && usman < hamza)
    {
        printf("Usman is the youngest of other");
    }
    else if (hamza < usman && hamza < ali)
    {
        printf("Hamza is the youngest of other");
    }
    else if (ali < usman && ali < hamza)
    {
        printf("ALi is the youngest of other");
    }
    else
    {
        printf("No one is the youngets one");
    }
    return 0;
}