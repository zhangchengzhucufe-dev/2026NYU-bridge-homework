#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize)
{
    for(int i = 0; i < arrSize/2; i++)
    {
        int swap;
        arr[i] = swap;
        arr[i] = arr[arrSize - 1 -i];
        arr[arrSize - 1 -i] = swap;
    }
}


void removeOdd(int arr[], int& arrSize)
{
    int pos = 0;
    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] % 2 == 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }
    arrSize = pos;
}

void splitParity(int arr[], int arrSize)
{
    int left = 0, right = arrSize - 1;
    if(left < right)
    {
        while(arr[left] % 2 != 0)
        {
            left++;
        }
        while(arr[right] % 2 == 0)
        {
            right++;
        }
        int swap;
        swap = arr[left];
        arr[left] = arr[right];
        arr[right] = swap;
    }
}