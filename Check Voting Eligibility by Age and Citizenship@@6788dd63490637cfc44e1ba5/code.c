#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age, status;
    scanf("%d %d", &age, &status);
    if(age >= 18 && status) printf("Eligible");
    else printf("Not Eligible");
    return 0;
}