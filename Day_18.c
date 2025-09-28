#include <stdio.h>

int min(int a, int b, int c, int d) {
    int temp = (a < b) ? a : b;
    temp = (temp < c) ? temp : c;
    return (temp < d) ? temp : d;
}

int main() {
    int n;
    printf("");
    scanf("%d", &n);
    
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value = n - min(i, size - 1 - i, j, size - 1 - j);
            
            printf("%d", value);
            if (j < size - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
