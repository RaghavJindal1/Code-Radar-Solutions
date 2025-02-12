
void bubbleSort(int arr[], int n)
{
    for(int i = 1;i<n;i++)
    {
        for(int k =0;k<n-i;k++)
        {
            if(arr[k] > arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] =  temp;
            }
        }
    }
    return arr;
}
void printArray(int arr[], int n)
{
    for(int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

