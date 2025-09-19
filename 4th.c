#include <stdio.h>

int main() {
    int year, day = 0;
    printf("Enter year: ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            day += 2; // Leap year
        else
            day += 1;
    }

    day %= 7;
    
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("1st January %d is a %s\n", year, days[day]);

    return 0;
}
