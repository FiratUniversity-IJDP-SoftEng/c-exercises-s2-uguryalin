#include <stdio.h>
#include <math.h>    //I am not sure if I need this

int main() {
    int number;
    int count = 0;
    int sum = 0;
    float average;

    printf("Please enter numbers (enter 0 to stop):\n"); // I changed the "-1"

    while (1) {
        printf("Number: ");
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        count++;
        sum += number;
    }

    if (count > 0) {
        average = sum / (float)count;
        printf("Count of numbers entered: %d\n", count);
        printf("Sum of numbers: %d\n", sum);
        printf("Average of numbers: %.4f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }
    return 0;
}
