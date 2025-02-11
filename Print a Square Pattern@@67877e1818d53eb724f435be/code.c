#include <stdio.h>

#define rep(i,a,b) for(int i=a, i<b, i++)

int main() {
    int n;
    scanf("%d",&n);
    rep(i,0,n)
    {
        rep(j,0,n)
            printf("* ");
        printf("\n");
    }
    
    return 0;
}