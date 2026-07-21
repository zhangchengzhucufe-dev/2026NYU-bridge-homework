#include <vector>
#include <cctype>
using namespace std;


int* findMissing(int arr[], int n, int& resArrSize)
{
    int* result = new int[n + 1]{0};
    for(int i = 0; i < n; i++)
    {
        ++result[arr[i]];
    }
    resArrSize = 0;
    vector<int> vec;
    for(int i =0; i <= n; i++)
    {
        if(result[i] == 0)
        {
            vec.push_back(i);
            ++resArrSize;
        }
    }
    int* result2 = new int[resArrSize];
    for(int i = 0; i < resArrSize; i++)
    {
        result2[i] = vec[i];
    }
    return result2;
}
