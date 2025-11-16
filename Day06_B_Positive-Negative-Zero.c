//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.//
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);


    if(num > 0){
        printf("%d is positive", num);
    } else{
        if(num<0){
            printf("%d is negative", num);
        } else{
            if(num==0){
                printf("The number is = 0");


            }
        }
        
    }
    return 0;
    }
