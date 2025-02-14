#include <stdio.h>
int main()
{
    float m;
    printf("Enter Total Marks : ");
    scanf("%f", &m); // m for marks
    if (m >= 86.00 && m <= 100.00)
        printf("Grade is 'A' CGPA is '4'");
    else if (m >= 82.00 && m < 86.00)
        printf("Grade is 'A-' CGPA is '3.67'");
    else if (m >= 78.00 && m < 82.00)
        printf("Grade is 'B+' CGPA is '3.33'");
    else if (m >= 74.00 && m < 78.00)
        printf("Grade is 'B' CGPA is '3'");
    else if (m >= 70.00 && m < 74.00)
        printf("Grade is 'B-' CGPA is '2.67'");
    else if (m >= 66.00 && m < 70.00)
        printf("Grade is 'C+' CGPA is '2.33'");
    else if (m >= 62.00 && m < 66.00)
        printf("Grade is 'C' CGPA is '2.00'");
    else if (m >= 58.00 && m < 62.00)
        printf("Grade is 'C-' CGPA is '1.67'");
    else if (m >= 54.00 && m < 58.00)
        printf("Grade is 'D+' CGPA is '1.33'");
    else if (m >= 50.00 && m < 54.00)
        printf("Grade is 'D' CGPA is '1.00'");
    else
        printf("Invalid Marks");
    return 0;
}