#include <stdio.h>
int main()
{
    int sarah, ali, ahmed;
    printf("Enter Sarah age : ");
    scanf("%d", &sarah);
    printf("Enter Ali age : ");
    scanf("%d", &ali);
    printf("Enter Ahmed age : ");
    scanf("%d", &ahmed);
    (sarah < ali && sarah < ahmed) ? printf("Sarah is the youngest of other") : (ahmed < sarah && ahmed < ali) ? printf("Ahmed is the youngest of other") : (ali < sarah && ali < ahmed) ? printf("ALi is the youngest of other") : printf("No one is the youngets one");
    return 0;
}