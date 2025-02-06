#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int temp;
    scanf("%d", &temp);
    if(temp > 0) printf("Above Freezing");
    else printf("Freezing");
    return 0;
}