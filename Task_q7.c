#include <stdio.h>

int main() {
    int n; 
    int reverse = 0;
    int remainder;

    printf("Reverse Number System 12345- Enter The Numbers: ");
    scanf("%d", &n);

    int original = n; //  Save the Orginal Number

    do
    {
        remainder = n % 10;                // Module Last Number
        reverse = (reverse * 10) + remainder; // Reverse last number
        n = n / 10;                        // Remove the last Number/* code */

    } while (n != 0);

        printf("Orginal Number   %d\nReverse Number   %d\n", original, reverse);

     return 0;
     
}