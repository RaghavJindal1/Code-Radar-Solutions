#include <stdio.h>
#define rep(i,a,b) for(int i = a; i < b;i++)

int main() {
    int n;
    scanf("%d", &n);
    rep(i,1,2*n)
    {
        rep(j,0,(2*n-i-1)%(2*n-1))
            printf(" ");
        rep(k,1,2*i)
            printf("*");
        printf("\n");
    }
    return 0;
}