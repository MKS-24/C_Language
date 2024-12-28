#include <stdio.h>
int main()
{
    char gender,status;
    int yos;
    printf("Press 'M'or'm' for Male\nPress 'F'or'f' for Female\nEnter Gender : ");
    scanf(" %c", &gender);
    printf("Enter year of service : ");
    scanf("%d", &yos);
    printf("Press 'P'or'p' for Post-Graduate\nPress 'G'or'g' for Graduate\nEnter Qualification : ");
    scanf(" %c",&status);
    if (gender == 'M' || gender == 'm')
    {
        if(yos >= 10 && (status == 'P' || status =='p')) printf("Your salary is Rs:15000");
        else if(yos >= 10 && (status == 'G' || status =='g')) printf("Your salary is Rs:10000");
        else if(yos < 10 && yos > 0 && (status == 'P' || status =='p')) printf("Your salary is Rs:10000");
        else if(yos < 10 && yos > 0 && (status == 'G' || status =='g')) printf("Your salary is Rs:7000");
        else ("Does not fullfil Condition");
    }
    else if(gender == 'F' || gender == 'f')
    {
        if(yos >= 10 && (status == 'P' || status =='p')) printf("Your salary is Rs:12000");
        else if(yos >= 10 && (status == 'G' || status =='g')) printf("Your salary is Rs:9000");
        else if(yos < 10 && yos > 0 && (status == 'P' || status =='p')) printf("Your salary is Rs:10000");
        else if(yos < 10 && yos > 0 && (status == 'G' || status =='g')) printf("Your salary is Rs:6000");
        else ("Does not fullfil Condition");
    }
    else ("Does not fullfil Condition");
    return 0;
}