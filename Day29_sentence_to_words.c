// Q29.) Program to split a sentence into words and print each word on a new line in C

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " \n");
    }

    return 0;
}