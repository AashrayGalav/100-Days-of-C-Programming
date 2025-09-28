#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int temp_a = *a;
    int temp_b = *b;
    *a = temp_a + temp_b;
    *b = abs(temp_a - temp_b);
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    update(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
