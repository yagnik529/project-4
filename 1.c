#include <stdio.h>

int main() {
    int rows = 5; 
    int start = 41; 

    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j <= i; j++) { 
            printf("%d ", start + j); 
        }
        printf("\n"); 
    }

    return 0;
}
