#include <algorithm>
#include <vector>
using namespace std;

vector<int> getOdd(int arr[], int arrSize)
{
    vector<int> oddVec;
    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] % 2 != 0)
        {
            oddVec.push_back(arr[i]);
        }
    }
    return oddVec;
}

vector<int> getEven(int arr[], int arrSize)
{
    vector<int> evenVec;
    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenVec.push_back(arr[i]);
        }
    }
    return evenVec;
}


void oddsKeepEvensFlip(int arr[], int arrSize)
{
    vector<int> oddVec, evenVec;
    oddVec = getOdd(arr, arrSize);
    evenVec = getEven(arr, arrSize);
    reverse(evenVec.begin(), evenVec.end());
    for(int i = 0; i < arrSize; i++)
    {
        if(i < oddVec.size())
        {
            arr[i] = oddVec[i];
        }
        else
        {
            arr[i] = evenVec[i - evenVec.size()];
        }
    }
}