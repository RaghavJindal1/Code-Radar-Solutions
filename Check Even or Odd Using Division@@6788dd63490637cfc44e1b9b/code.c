#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("Even");
    else printf("Odd");
    return 0;
}