/*
Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/
#include<stdio.h>
int main(){
    float angle1,angle2,angle3;
    printf("Enter 1st Angle : ");
    scanf(" %f",&angle1);
    printf("Enter 2nd Angle : ");
    scanf(" %f",&angle2);
    printf("Enter 3rd Angle : ");
    scanf(" %f",&angle3);
    float sum = angle1 + angle2 + angle3;
    if(sum == 180) printf("Triangle is Valid");
    else printf("Triangle is Invaid");
    return 0;
}