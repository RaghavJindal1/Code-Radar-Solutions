#include <stdio.h>

#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n;
    scanf("%d", &n);
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(!((i!=0 && j !=0) && (i!=n-1 && j!=n-1)))
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}