#include<stdio.h>
#define rep(i,a,b) for(int i = a;i<b;i++)
int main()
{
    int n;
    scanf("%d", &n);
    count = 1;
    rep(i,1,n+1)
    {
        rep(j,0,i)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }



    return 0;
}