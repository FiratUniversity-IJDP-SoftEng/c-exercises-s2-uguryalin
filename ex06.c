#include <stdio.h>

int main() {
    int numbers[17];
    int index = 0;

    for (int i = 99; i >= 51; i -= 3) {
        numbers[index] = i;
        index++;
    }

    printf("Numbers divisible by 3 from 100 to 50:\n");
    for (int i = 0; i < index; i++) {
        printf(" %d ", numbers[i]);
        if (i < index - 1) {
            printf(" \n ");
        }
    }
    printf("\n");

    return 0;
}
