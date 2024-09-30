#include <stdio.h>

int main() {
    int rows = 4; 

    for (int i = 1; i <= rows; i++) { 
        if (i == 1 || i == 3) { 
            for (int j = 1; j <= 5; j++) {
                printf("* ");
            }
        } else { 
            printf("*       ");
        }
        printf("\n"); 
    }

    return 0;
}

