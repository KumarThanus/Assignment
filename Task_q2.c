#include <stdio.h>

int main() {
    int a;
    int b;

    // 1. Input two integers
    printf("Enter first integer (a): ");
    scanf("%d", &a); 
    
    printf("Enter second integer (b): ");
    scanf("%d", &b);

    // 2. Print before swapping
    printf("\n--- Before Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);

    // 3. The Swap Logic (No third variable used)
    a = a + b; 
    b = a - b; 
    a = a - b; 

    // 4. Print after swapping
    printf("\n--- After Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}