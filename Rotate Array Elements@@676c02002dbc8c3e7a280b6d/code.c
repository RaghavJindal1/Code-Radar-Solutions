#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    int temp[n];
    for(int i = 0; i<n ;i++)
    {
        temp[i] = arr[i%k];
        printf("%d\n",temp[i]); 
    }


    return 0;
}