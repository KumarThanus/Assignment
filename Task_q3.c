#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Rules & ondition

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {

        printf("%d is a Leap Year.\n", year);
        //1st leap year cheak 

    } else {
        printf("%d is not a Leap Year.\n", year);
        //2nd not leap year cheak
         
    }

    return 0;
}