#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0; 
    if (n == 1) return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int n;
    printf("Enter the position (n) in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d: ", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    return 0; 
}
