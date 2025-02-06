#include <stdio.h>

int isPrime(int num)
{   int flag = 1;
    for(int i = 2; i <= (num/2 ); i++)
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    int num;
    scanf("%d", &num);
    if(isPrime(num)) printf("Prime");
    else printf("Not Prime");
    return 0;
}