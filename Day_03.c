#include <stdio.h>

int main() {

    int a= 5;
    int b=10;
    int sum;

    sum = a + b;

    printf("Addition = %d\n", sum);

    int c = 50;
    int d = 20;
    int sub;

    sub = c-d;
    printf("Subtraction = %d\n", sub);

    int multiply;

    multiply = a*b;
    printf("Multiplication = %d\n", multiply);

    int div;

    div = b/a;
    printf("Division = %d\n", div);

    int mod;
    mod = b%a;
    printf("Modulus = %d", mod);
    return 0;

}
