int isPrime(int num)
{   if(num < 2) return 0;
    int flag = 1;
    for(int i =2;i <= num/2;i++)
    {
        if(num % i == 0) flag = 0;
    }
    return flag;
}