#include <stdio.h>
#define rep(i,a,b) for(int i = a; i < b;i++)

int main() {
    int n;
    scanf("%d", &n);
    rep(i,1,2*n)
    {
     printf("*");
    }
    return 0;
}