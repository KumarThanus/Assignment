#include <stdio.h>

int main() {
    char operator;
    int num1;
    int num2;

    // 1. Get the operator 
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // 2. Get the two numbers
    printf("Enter 1st numbers: ");
    scanf("%d", &num1);
    printf("Enter 2nd numbers: ");
    scanf("%d", &num2);

    // 3. Switch statement to handle calculations
    switch (operator) {
        case '+':
            printf("Answer: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Answer: %d - %d = %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Answer: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Critical Safety Check: Handle division by zero
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                printf("Answer: %d / %d = %d\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Error! Invalid operator entered.\n"); // 0
    }

    return 0;
}