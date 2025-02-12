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
    rep(i,1,n)
    {
        rep(k,0,n-i)
        {
            if(arr[k] > arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] =  temp;
            }
        }
    }
}
void printArray(int arr[], int n)
{
    rep(i,0,n)
    {
        printf("%d ",arr[i]);
    }
}

