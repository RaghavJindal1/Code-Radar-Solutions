#include<stdio.h>
#define rep(i,a,b) for(int i = a;i<b;i++)
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    rep(i,0,n)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);    
    printArray(arr, n);

    return 0;
}
void bubbleSort(int arr[], int n)
{
    rep(i,0,n-1)
    {
        rep(j,i+1,n)
        {
            if(arr[i] > arr[j])
        }
    }
}

