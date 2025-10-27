// Q28.) Program to count and print the frequency of each digit (0–9) in a given number string in C

#include <stdio.h>
#include <string.h>

int main() {
    char num[1000];   
    scanf("%s", num);

    int freq[10] = {0};   

    for (int i = 0; i < strlen(num); i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            freq[num[i] - '0']++;  
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}