//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit or special character. 

#include <stdio.h>
 int main() {
 
    char a;
    
    printf("Enter a character: ");
    scanf("%c", &a);
    
    if(a >= 'A' && a <= 'Z') {
     printf("Uppercase alphabet");
   } 
    if(a >= 'a' && a <= 'z') {
     printf("Lowercase alphabet");
   } 
    if(a >= 0 || a < 9) {
     printf("Digit");
   } 
    else {
     printf("Special character");
   } 
    return 0;
}
