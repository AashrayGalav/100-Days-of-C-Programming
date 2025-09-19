#include <stdio.h>

int main() {
    
    char name[100];
    char age[100];
        
    printf("Please enter your name: ");
    scanf("%s", name);
    
    printf("Please enter your age: ");
    scanf("%s", age);
    
    printf("\nYour Information\n");
    printf("Hello, %s!\n", name);
    printf("You are %s years old.\n", age);  
        
    return 0;
}
