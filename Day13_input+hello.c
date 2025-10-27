//Q13.)Write a Program to print “Hello, World!” followed by user input in C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s", s);
    
    return 0;
}
