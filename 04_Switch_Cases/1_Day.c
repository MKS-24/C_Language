#include <stdio.h>
int main()
{
    int day;
    printf("Enter Day(1 - 7) : ");
    scanf("%d",&day);
    switch (day) // switch ke lye break imp hai 
    {            // cases orderless bhi hosakhte hai mean case 2 pehle and case 1 baad me
        case 1:  printf("Monday\n");
        break;
        case 2:  printf("Tuesday\n");
        break;
        case 3:  printf("Wednesday\n");
        break;
        case 4:  printf("Thursday\n");
        break;
        case 5:  printf("Friday\n");
        break;
        case 6:  printf("Saturday\n");
        break;
        case 7:  printf("Sunday\n");
        break;
        default :printf("Not a Valid Number");
    }
    return 0;
}

// Float value and condition (switch) me nh aati.