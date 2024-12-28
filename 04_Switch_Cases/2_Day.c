#include <stdio.h>
int main()
{
    char day;
    printf("Enter Day(M - S) : ");
    scanf("%c",&day);
    switch (day) // switch ke lye break imp hai
    {           // // cases orderless bhi hosakhte hai mean case 2 pehle and case 1 baad me
        case 'M':  printf("Monday\n");
        break;
        printf("Hello World"); // Nh print hoga QK Ager case 1 bhi hoa to break switch se bahir nikal dega 
        case 'T':  printf("Tuesday\n");
        break;
        case 'W':  printf("Wednesday\n");
        break;
        case 't':  printf("Thursday\n");
        break;
        case 'F':  printf("Friday\n");
        break;
        case 's':  printf("Saturday\n");
        break;
        case 'S':  printf("Sunday\n");
        break;
        default :printf("Not a Valid Day");
    }
    return 0;
}

// Float value and condition (switch) me nh aati.