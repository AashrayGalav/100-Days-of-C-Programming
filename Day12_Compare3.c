//Q12.) Write a program in C to compare three given integers , and print it.

#include <stdio.h>

int main() {

    int a= 3;
    int b= 5;
    int c= -10;

    if(a>0 && b>0 && c<0) {
        printf("True\n");

    } else {
        printf("False");
    }
    

    if(a<0 || b<0) {
        printf("True");
    } else {
        printf("False");
    }

    

}


