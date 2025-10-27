//Q19.) Write a Program to find maximum bitwise AND, OR, and XOR values less than a given limit in C

#include <stdio.h>

int main() {
    int n, k;
    
    scanf("%d %d", &n, &k);
    
    int max_and = 0, max_or = 0, max_xor = 0;
    
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            
            int and_result = a & b;
            if (and_result < k && and_result > max_and) {
                max_and = and_result;
            }
            
            int or_result = a | b;
            if (or_result < k && or_result > max_or) {
                max_or = or_result;
            }
            
            int xor_result = a ^ b;
            if (xor_result < k && xor_result > max_xor) {
                max_xor = xor_result;
            }
        }
    }
    
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
    
    return 0;
}