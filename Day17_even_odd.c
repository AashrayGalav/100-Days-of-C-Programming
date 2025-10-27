//Q17.)Program to print numbers in words for 1–9 and “even” or “odd” for numbers greater than 9 in C

#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    char *numbers[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            printf("%s\n", numbers[n]);
        } else if (n > 9) {
            if (n % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
    
    return 0;
}
