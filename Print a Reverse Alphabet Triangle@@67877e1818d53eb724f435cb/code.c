#include<stdio.h>
#define rep(i,a,b) for(int i = a;i<b;i++)
int main()
{
    int n;
    scanf("%d", &n);
    rep(i,0,n)
    {   char ch = 'A';
        rep(j,i,n)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }




    return 0;
}