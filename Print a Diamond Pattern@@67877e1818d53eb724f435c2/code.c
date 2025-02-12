#include <stdio.h>
#define rep(i,a,b) for(int i = a; i < b;i++)
int updater(int n, int i)
{
    if(n > i) return n-i;
    else return i - n;
}
int updater2(int n, int i)
{
    if(i > n) return (n*2-i)*2-1;
    else return i*2-1;
}
int main() {
    int n;
    scanf("%d", &n);
    rep(i,1,2*n)
    {
     rep(j,0,updater(n,i))
        printf(" ");
     rep(k,0,updater2(n,i))
        printf("*");
     printf("\n");
    }
    return 0;
}