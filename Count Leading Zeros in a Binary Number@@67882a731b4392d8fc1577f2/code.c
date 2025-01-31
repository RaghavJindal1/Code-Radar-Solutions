#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned a, count = 0;
    scanf("%u", &a);
    while( a|1 != 1)
    {
        count++;
        a = a>>1;
    }
    printf("%d", 32 - count);
    return 0;
}