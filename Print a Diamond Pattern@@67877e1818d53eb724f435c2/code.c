#include <stdio.h>
#define rep(i,a,b) for(int i = a; i < b;i++)
int updater(int n, int i)
{
    if(n > i) return n-i;
    else return i - n;
}
int main() {
    int n;
    scanf("%d", &n);
    rep(i,1,2*n)
    {
     rep(j,0,updater(n,i))
        printf(" ");
     rep(k,0,i)
        printf("*");
     printf("\n");
    }
    return 0;
}