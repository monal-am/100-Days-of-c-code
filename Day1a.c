//Write a program to input two numbers display their sum.

#include <stdio.h>

int main(void) {
    int x, y, sum;
    
    // ask user for 2 numbers 
    printf("Enter 1st number: ");
    scanf("%d", &x);
    
    printf("Enter 2nd number: ");
    scanf("%d", &y);
     
    // calculate the sum of two numbers 
    sum = x + y;
    
    // display result 
    printf("the sum = %d/n", sum);
    
    return 0;
}

    
