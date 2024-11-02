#include <stdio.h>

int main() {
    printf("Column 1\t\tColumn 2\t\tColumn 3\n"); 
    
    for (int i = 1; i <= 10; i++) {
        int column1 = i * 5; 
        int column2 = 100 - ((i - 1) * 10 + 1);
        int column3 = i; 

    printf("\t%d\t\t\t\t%d\t\t\t\t%d\n", column1, column2, column3);
    }
    return 0;
}

// My own code(I changed the some basic points)

#include <stdio.h>

int main() {
    printf("Column 1\tColumn 2\tColumn 3\tColumn 4\tColumn 5\n");

    for (int i = 1; i <= 10; i++) {
        int column1 = i * 5;
        int column2 = 100 - ((i - 1) * 10 + 1);
        int column3 = i;
        int column4 = i * i;
        int column5 = i +5;

     printf("\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n", column1, column2, column3, column4, column5);
    }
    return 0;
}
