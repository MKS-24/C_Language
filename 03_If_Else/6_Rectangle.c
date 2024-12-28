// Take length bredth as input and check area is greater than its perimeter.
# include<stdio.h>
int main(){
    float length,bredth;
    printf("Enter Rectangle length : ");
    scanf("%f",&length);
    printf("Enter Rectangle Bredth : ");
    scanf("%f",&bredth);
    float area = length * bredth , perimeter = 2*(length + bredth); // Area of rectangle is = length x Breadth and Perimeter of rectangle is = 2 x (length + Breadth )
    if(area > perimeter)
    {
        printf("Area is greater than its Perimeter");
    }
    // else if(area == perimeter)               // Nahi hoga program me Qk area ya tu bara hoga parameter se ya chota hoga
    // {
    //     printf("Area is equal to its Perimeter");
    // }
    else if(area < perimeter)
    {
        printf("Perimeter is greater to its Area");
    }
    return 0;
}