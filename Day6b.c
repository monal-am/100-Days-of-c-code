//Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.

#include <stdio.h>

int main() {
    int i;
    
    printf("Enter an integer: ");
    scanf("%d", &i);
    
    if(i > 0) {
     printf("%d is positive ./n", i);
  }
    if(i < 0) {
     printf("%d is negative ./n", i);
  }
    else {
     printf("%d is zero ./n", i);
  }
    return 0;
}
