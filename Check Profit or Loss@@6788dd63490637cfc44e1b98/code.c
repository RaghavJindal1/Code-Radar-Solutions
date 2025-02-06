#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int cp, sp;
    scanf("%d %d", &cp , &sp);
    if((sp - cp) > 0) printf("Profit");
    else if((sp - cp) < 0) printf("Loss");
    else printf("No Profit No Loss");
    return 0;
}