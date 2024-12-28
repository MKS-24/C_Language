/*
A company insures its drivers in the following cases
―If driver is married
―If the driver is unmarried, male & above 30 years of age
―If the driver is unmarried, female & above 25 years of age
In all other cases the driver is not insured. If the marital status, gender and age of the driver are entered through the keyboard, 
write a program to determine whether the driver is to be insured or not.
*/
# include<stdio.h>
int main(){
    char gender, status;
    int age;
    printf("Press 'M'or'm' for Married and 'U'or'u' for Unmarried\nEnter Marital Status : ");
    scanf(" %c",&status);
    if(status == 'M' || status == 'm') printf("A company insures its drivers");
    else{
    printf("Press 'M'or'm' for male and 'F'or'f' for female\nEnter Driver Gender : ");
    scanf(" %c",&gender);
    printf("Enter Driver Age : ");
    scanf(" %d",&age);
    if((status == 'U' || status == 'u') && (gender == 'M' || gender == 'm') && age>30) printf("A company insures its drivers");
    else if((status == 'U' || status == 'u') && (gender == 'F' || gender == 'f') && age>25) printf("A company insures its drivers");
    else printf("A company does not insures its drivers");
    }
    return 0;
}