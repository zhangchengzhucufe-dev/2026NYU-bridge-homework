#include <algorithm>
using namespace std;

int jumpIt(int arr[], int arrSize)
{
    if()
    int minCost;
    if(arrSize == 2 || arrSize == 3)
    {
        minCost = arr[arrSize - 1];
    }
    else
    {
        int minCost1 = jumpIt(arr, arrSize - 1);
        int minCost2 = jumpIt(arr, arrSize - 2);
        minCost = min(minCost1, minCost2) + arr[arrSize - 1];
    }
    return minCost;
}