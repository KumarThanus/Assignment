#include <stdio.h>

// Function  1 
//if n is a palindrome, else 0
int isPalindrome(int n) {
    int original = n;
    int reverse = 0;
    int remainder;

    //  loop to reverse the integer use while loop
    while (n != 0) {
        remainder = n % 10;                  // the last digit
        reverse = (reverse * 10) + remainder;  //  the reversed integer
        n = n / 10;                          // remove the last digit
    }

    // number matches the original is the reverse number
    if (original == reverse) {
        return 1; // It is a palindrome
    } else {
        return 0; // It is not a palindrome
    }
}

            //Main cheaking
int main() {
    int number;

    printf("Palindrome Numbers Checking - Enter the integers: ");
    scanf("%d", &number);

    // call-function
    if (isPalindrome(number) == 1) {
        printf("%d is a Palindrome number.\n", number);
    } else {
        printf("%d is not a Palindrome number.\n", number);
    }

    return 0;
}