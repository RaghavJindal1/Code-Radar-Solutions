#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int marks;
    scanf("%d", &marks);
    if(marks >= 90)
        printf("A");
    else if(marks >= 80)
        printf("B");
    else if(marks >= 60 && marks < 70)
        printf("C");
    else printf("F");
    return 0;
}