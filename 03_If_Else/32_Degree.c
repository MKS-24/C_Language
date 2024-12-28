/*
A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidiary subject:
(a)	He should get 55 percent or more in A and 45 percent or more in B.
(b)	If he gets less than 55 percent in A he should get 55 percent or more in B. However, he should get at least 45 percent in A.
(c)	If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in an examination in B to qualify.
(d)	In all other cases he is declared to have failed.

Write a program to receive marks in A and B and Output whether the student has passed, failed or is allowed to reappear in B. (Using Ternary operator)

*/
#include <stdio.h>
int main()
{
    int m1,m2;
    printf("How Many Percent of Marks in Main Subject(A) : ");
    scanf("%d", &m1);
    printf("How Many Percent of Marks in Subsidiar Subject(B) : ");
    scanf("%d", &m2);    
    (m1>=55 && m2>=45)?printf("Passed"):((m1<55 && m1>=45) && m2>=55)?printf("Passed"):((m1>=65) && m2<45)?printf("Reapper in examination in B to qualify"):printf("Failed");
    return 0;
}