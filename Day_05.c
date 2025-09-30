#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b) {
        printf("Triangle is valid.\n");

        if (a == b && b == c)
            printf("Equilateral triangle.\n");
        else if (a == b || b == c || c == a)
            printf("Isosceles triangle.\n");
        else
            printf("Scalene triangle.\n");

        if (fabs(a * a + b * b - c * c) < 1e-6 ||
            fabs(b * b + c * c - a * a) < 1e-6 ||
            fabs(c * c + a * a - b * b) < 1e-6)
            printf("Right-angled triangle.\n");

    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
