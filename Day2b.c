//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
    float radius, area, circumference;
    
    //input from user 
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    
    //calculations for area and circumference 
    area = 3.142857143*(radius*radius);
    circumference = 2*3.142857143*(radius);
     
    //result
    printf("Area of the Circle: %.2f\n", area);
    printf("Circumference of the Rectangle: %.2f\n", circumference);
    
    return 0;
}
