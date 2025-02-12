#include<stdio.h>
#define rep(i,a,b) for(int i = a;i<b;i++)
int main()
{
    int n;
    scanf("%d", &n);
    rep(i,1,n+1)
    {   int num = 1;
        rep(j,0,i)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }




    return 0;
}