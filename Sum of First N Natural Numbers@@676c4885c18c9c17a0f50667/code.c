#include<stdio.h>
#define rep(i,a,b) for(int i = a;i<b;i++)
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    rep(i,1,n+1)
        {sum += i;}
    printf("%d",sum);
        
    




    return 0;
}.