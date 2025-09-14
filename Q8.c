#include <stdio.h>

int main() {
    int n, sum;

    // Taking input
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Using formula
    sum = n * (n + 1) / 2;

    // Output
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
