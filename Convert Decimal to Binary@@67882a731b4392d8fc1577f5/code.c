#include <stdio.h>



int main() {
    int a;
    scanf("%d", &a);
    temp = 1;
    while(temp*2 <= a) 
        {temp*=2;}
    long long ans = 0;
    while(temp != 0)
    {
        int q = a/temp;
        ans = (ans*10 )+ q;
        a = a - (q*temp);
        temp = temp/2;
    }
    printf("%lld", ans);
    return 0;
}