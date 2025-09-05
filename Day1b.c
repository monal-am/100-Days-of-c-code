//Write a program to input two numbers display their sum, difference, product and quotient.

#include <stdio.h>

int main() {
    float x, y, sum, difference, product, quotient;
    
    // ask user for 2 numbers 
    printf("Enter 1st number: ");
    scanf("%f", &x);
    
    printf("Enter 2nd number: ");
    scanf("%f", &y);
     
    // calculation
    sum = x + y;
    difference = x - y;
    product = x * y;
    quotient = x / y;
    
    
    // display result 
    printf("the sum = %f\n", sum);
    printf("the difference = %f\n", difference);
    printf("the product = %f\n", product);
    
    if (y!=0)
       printf("the quotient = %.2f\n", quotient);
    
    else
       printf("infinity");
    

    return 0;
}

    
