int main() {
    int size = 5;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i || j == (size - 1 - i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

//output

/*
*    * 
 *  * 
  ** 
 *  * 
*    * 
*/


//My own code 

#include <stdio.h>

int main() {
    int size = 6; 

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i || j == (size - 1 - i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");

        for (int j = 0; j < size; j++) {
            if ((j == 0 || j == size - 1) && (i > 0 && i < size - 1)) {
                printf("O");
            } else if ((i == 0 || i == size - 1) && (j > 0 && j < size - 1)) {
                printf("O");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
        for (int j = 0; j < size; j++) {
            if (j == i || j == (size - 1 - i)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// output of my code
/*
*    *   OOOO   *    *
 *  *   O    O   *  * 
  **    O    O    **  
  **    O    O    **  
 *  *   O    O   *  * 
*    *   OOOO   *    *
*/
