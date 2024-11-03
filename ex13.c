#include <stdio.h>
#include <math.h> // but again I'm not sure if I need this

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
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
