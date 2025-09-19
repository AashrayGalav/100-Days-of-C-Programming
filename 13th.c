#include <stdio.h>
#include <conio.h>

void main() {
    int n,i;
    printf("Enter a number");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("Number is %d\n", i);
    }
    getch();
}