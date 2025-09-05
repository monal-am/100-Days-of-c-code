#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;
    
    //input from user 
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);
    
    //calculations for area and perimeter 
    area = length * breadth;
    perimeter = 2 * (length + breadth);
     
    //result
    printf("Area of the Rectangle: %f\n", area);
    printf("Perimeter of the Rectangle: %f\n", perimeter);
    
    return 0;
}
