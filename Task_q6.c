#include <stdio.h>

int main() {
    int n;
    int t1 = 0;
    int t2 = 1;
    int term_N;

    printf("Fibonacci Series - Should I print What's The Number ?(n): ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d, ", t1);
                term_N = t1 + t2; // two numbers add
                t1 = t2;      // Modify 
                t2 = term_N;      // modify     t1=t2,t2=term_n
    }
    printf("\n");

    return 0;
}