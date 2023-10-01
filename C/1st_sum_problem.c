#include <stdio.h>

int main(void) {
    int n;
    printf("Please enter a number: ");
    scanf("%i", &n);

    int sum = n * (n + 1) / 2;
    printf("Sum: %i", sum);

    return 0;
}

