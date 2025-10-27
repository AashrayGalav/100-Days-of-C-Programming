//Write a Program to calculate the sum of digits of a number in C

#include <stdio.h>

int main() {
    int n, sum = 0, digit;
    
    printf("");
    scanf("%d", &n);
    
    while (n > 0) {
        digit = n % 10;  // Get the last digit
        sum += digit;    // Add it to sum
        n = n / 10;      // Remove the last digit
    }
    
    printf("%d\n", sum);
    
    return 0;
}
