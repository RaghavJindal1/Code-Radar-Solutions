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
        rep(j,0,2*i-1)
        {   
            printf("%d",count);
            count ++;
            if(count > i) count--;
            
        }
        printf("\n");
    }



    return 0;
}