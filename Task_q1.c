#include <stdio.h>

int main(){

    float c; // Celsius
    float f; // Fahrenheit

	// get Celsius

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &c); 

    // Find fahrenheit
    f = (c * 9/5) + 32; 
    
    // find Celsius to Fahrenhet
    printf("%.2f Celsius is Equal to %.2f Fahrenheit\n", c, f);

    return 0;
}
