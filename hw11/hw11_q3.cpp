int minInArray1(int arr[], int arrSize)
{
    int min;
    if(arrSize == 1)
    {
        min = arr[arrSize - 1];
    }
    else
    {
        minInArray1(arr, arrSize - 1);
        if(min > arr[arrSize - 1])
        {
            min = arr[arrSize - 1];
        }
    }
    return min;
}

int minInArray2(int arr[], int low, int high)
{
    int min;
    if(high - 1 == low)
    {
        min = arr[high - 1];
    }
    else
    {
        minInArray2(arr, low, high - 1);
        if(min > arr[high - 1]) min = arr[high - 1];
    }
    return min;
}