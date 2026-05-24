#include <stdio.h>

int main() {
    int n ; 
    int is_primeNM = 1; // 1 is prime

    printf("Prime Number Checking Method - Enter The Number: ");
    scanf("%d", &n);

    if (n <= 1) {
        is_primeNM = 0; // 0 < is not prime number 
    } else {
                //for loop
        for (int i = 2; i < n; 
                 i++) {

            if (n % i == 0) {
                is_primeNM = 0; // cheak prime NM , or Not prime NM
                break;        // remove loop
            }
        }
    }

    if (is_primeNM == 1)
        printf("%d Is A Prime Number).\n", n);
    else
        printf("%d IS Not A Prime Number).\n", n);

    return 0;
}