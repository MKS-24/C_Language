# include <stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    if(num >= 1) printf("%d is a Natural number",num); // Natural number start from 1
    else printf("%d is not a Natural number",num);
    return 0;
}
    