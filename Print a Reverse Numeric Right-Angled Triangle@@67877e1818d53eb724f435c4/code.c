#include<stdio.h>
#define rep(i,a,b) for(int i = a; i<b; i++)
int main()
{
    int n;
    scanf("%d", &n);
    rep(i,1,n+1)
    {   int count = 1;
        rep(j,i,n+1)
            {printf("%d ",count); count++;}
        printf("\n");
    }


    return 0;
}