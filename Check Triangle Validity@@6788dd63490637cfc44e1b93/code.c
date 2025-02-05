#include <stdio.h>

int isTriangle(int a,int b, int c)
{
    int flag = 1;
    if((a+b) <= c) flag = 0;
    else if((a+c) <= b) flag =0;
    else if((b+c) <= a) flag = 0;
    return flag;
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if(isTriangle(a,b,c)) printf("Valid");
    else printf("Invalid");
    return 0;
}