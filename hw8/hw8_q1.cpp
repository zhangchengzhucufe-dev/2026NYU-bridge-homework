#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize)
{
    int mini = arr[0];
    for(int i = 0; i < arrSize; i++)
    {   
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

void findMinIndices(int arr[], int arrSize, int minVal)
{
    minVal = minInArray(arr, arrSize);
    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] == minVal)
        {
            cout << i << " ";
        }
    }
}