#include <stdio.h>
#define rep(i,a,b) for(int i = a; i < b;i++)
int updater(int n, int i)
{
    if(n > i) return n-i;
    else return i - n;
}
int updater2(int n, int i)
{
    if(i > n) return i - n;
    else return i;
}
int main() {
    int n;
    scanf("%d", &n);
    rep(i,1,2*n)
    {
     rep(j,0,updater(n,i))
        printf(" ");
     rep(k,0,updater2(n,i)*2-1)
        printf("*");
     printf("\n");
    }
    return 0;
}