//Q9.) Write a program in C to take temperature as input in Celcius , and convert to print it in Fahrenheit.

#include <stdio.h>

int main() {

    int c, f;
    
    printf("Enter Celsius: ");
    scanf("%d", &c);

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit = %d\n", f);
    return 0;
}
 