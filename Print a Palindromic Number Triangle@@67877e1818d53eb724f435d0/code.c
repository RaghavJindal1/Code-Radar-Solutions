#include<stdio.h>
#define rep(i,a,b) for(int i = a;i<b;i++)
int main()
{
    int n;
    scanf("%d", &n);
    rep(i,1,n+1)
    {   rep(k,0,n-i)
            printf(" ");
        int count = 1;
        rep(j,1,2*i-1)
        {   if(count>i) count = 1;
            printf("%d",count);
            count++;
        }
        printf("\n");
    }



    return 0;
}