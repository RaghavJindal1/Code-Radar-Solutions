#include <stdio.h>
#define rep(i,a,b) for(int i = a; i < b;i++)

int main() {
    int n;
    scanf("%d", &n);
    rep(i,1,2*n-1)
    {
        rep(j,0,i%n)
            printf(" ");
        rep(k,1,2*i)
            printf("*");
        printf("\n");
    }
    return 0;
}