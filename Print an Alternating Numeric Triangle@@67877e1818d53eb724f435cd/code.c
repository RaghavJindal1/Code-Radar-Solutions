#include<stdio.h>
#define rep(i,a,b) for(int i = a;i<b;i++)
int main()
{
    int n;
    scanf("%d", &n);
    int num;
    rep(i,1,n+1)
    {   if(i%2==0) num = 0;
        else num = 1;
        rep(j,0,i)
        {
            printf("%d ",num);
            num = (!num);
        }
        printf("\n");
    }




    return 0;
}