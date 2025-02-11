#include <stdio.h>
#define rep(i,a,b) for(int i =a;i <b; i++)

int main() {
    int n;
    scanf("%d", &n);
    rep(i,0,n)
    {   int temp = (n-i-1);
        while(temp--)
        {
            printf(" ");
        }
        rep(j,0,i)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}