#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    if(n & (1<<31)) printf("Set");
    else printf("Not Set");
    return 0;
}