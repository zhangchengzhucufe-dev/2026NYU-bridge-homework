int sumOfSquares(int arr[], int arrSize)
{
    int sum = 0;
    if(arrSize == 1)
    {
        sum += arr[arrSize - 1] * arr[arrSize - 1];
    }
    else
    {
        sumOfSquares(arr, arrSize - 1);
        sum += arr[arrSize - 1] * arr[arrSize - 1];
    }

    return sum;
}

bool isSorted(int arr[], int arrSize)
{
    int cur;
    if(arrSize == 1)
    {
        cur = arr[arrSize - 1];
    }
    else
    {
        isSorted(arr, arrSize - 1);
        if(cur > arr[arrSize - 1]) return false;
    }
    return true;
}