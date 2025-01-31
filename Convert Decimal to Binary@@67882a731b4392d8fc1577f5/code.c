#include <stdio.h>



int main() {
    int a;
    scanf("%d", &a);
    temp = 1;
    while(temp*2 <= a) 
        temp*=2;
    int ans = 0;
    while(temp != 0)
    {
        int q = a/temp;
        ans = ans*10 + q;
        a = a - (q*temp);
        temp = temp/2;
    }
    printf("%d", ans);
    return 0;
}