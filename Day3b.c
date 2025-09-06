 //Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
     int x, y, z;
     
     printf("Enter 2 numbers: ");
     scanf("%d %d",&x,&y);
     
     z = x;
     x = y;
     y = z;
     
     printf("swapping the two numbers: %d %d\n" ,x,y);
     
     return 0;
}
     
    
     
