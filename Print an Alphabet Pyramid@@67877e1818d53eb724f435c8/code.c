#include<stdio.h>
#define rep(i,a,b) for(int i = a;i<b;i++)
int main()
{
    int n;
    scanf("%d", &n);
    rep(i,1,n+1)
    {
        char ch = 'A';
        rep(j,0,i)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }




    return 0;
}