//Write a program to calculate simple and compound interest for given principle, rate and time.

#include <stdio.h> 

int main() {
   float p, r, t, n, SI, CI;
 
   printf("Enter principle, rate, number of times interest is compounded and time: \n");
   scanf("%f, %f, %f, %f", &p, &r, &t, &n);
   
   SI = (p*r*t)/100;
   CI = p*((1+(r/n))^n*t);
   
   printf("Simple Interest: %.2f\n", SI);
   printf("Compound Interest: %.2f\n", CI);
   
   return 0;
}
 
