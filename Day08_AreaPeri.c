//Q8.) Write a code in C to take length and breadth and calculate area and perimeter of rectangle.

#include <stdio.h>

int main() {

    int length, breadth, area, perimeter;

    printf("Enter Length: ");
    scanf("%d", &length);

    printf("Enter Breadth: ");
    scanf("%d", &breadth);

    area = length*breadth;
    perimeter = 2*(length+breadth);

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

    return 0;
    
}