//Scope Concept : variable ki auqaat pyrenthesis ke ander taq hoti hai
#include <stdio.h>
int main()
{
    int i;
    for ( i = 1; i <= 7; i++)
    {
        printf("Hello World\n");
    }
    printf("The value of i : %d",i); // i=8 hojae ga Qk i ki value 8 hoi tu loop fail howa 
    return 0;
}

