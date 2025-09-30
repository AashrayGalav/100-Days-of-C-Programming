#include <stdio.h>

int main() {
    float x1, x2, x3, y1, y2, y3;
    
    printf("Enter coordinates of three points:\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    float area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (area == 0)
        printf("Points are collinear.\n");
    else
        printf("Points are not collinear.\n");

    return 0;
}
