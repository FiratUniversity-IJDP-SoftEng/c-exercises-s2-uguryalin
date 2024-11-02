#include <stdio.h>
#include <math.h>  // I am not sure if I need this

int main() {
    int numbers[10];
    int sum = 0;
    float average;

    printf("Please enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }

    average = sum / 10.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.3f\n", average);

    return 0;
}




