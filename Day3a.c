//Write a program to convert temperature from Celsius to Fahrenheit 

#include <stdio.h>
 
 int main() {
     float Celsius, Fahrenheit;
      
     //input temperature in Celsius
     printf("Enter temperature in Celsius: ");
     scanf("%f", &Celsius);
      
     //convert celsius to fahrenheit 
     Fahrenheit = (Celsius * 9 / 5) + 32;
     
     //output of result
     printf("%f Celsius is %f Fahrenheit\n", Celsius, Fahrenheit);
     
     return 0;
}
     
