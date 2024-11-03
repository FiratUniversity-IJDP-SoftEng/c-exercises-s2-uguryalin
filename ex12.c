#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int number;

    printf("Enter a non-negative integer less than 50: ");
    scanf("%d", &number);

    if (number < 0 || number >= 50) {
        printf("Invalid input! Please enter a non-negative integer less than 50.\n");
        return 1;
    }
    unsigned long long result = factorial(number);
    printf("%d! = %llu\n", number, result);

    return 0;
}
