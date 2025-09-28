#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    getchar(); 
    
    scanf("%s", s);
    getchar(); 
    
    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = 0;
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
}
