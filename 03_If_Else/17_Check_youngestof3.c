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
    if (hamza < ali)
    {
        if (hamza < usman)
        {
            printf("Hamza is the youngest of other");
        }
        else
        {
            printf("Usman is the youngest of other");
        }
    }
    else if (ali < hamza)
    {
        if (ali < usman)
        {
            printf("Ali is the youngest of other");
        }
        else
        {
            printf("Usman is the youngest of other");
        }
    }
    else if (usman < hamza)
    {
        if (usman < ali)
        {
            printf("Usman is the youngest of other");
        }
        else
        {
            printf("ALi is the youngest of other");
        }
    }
    else
    {
        printf("No one is the youngest");
    }

    return 0;
}