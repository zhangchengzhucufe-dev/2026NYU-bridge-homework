#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void printBinary(int num)
{
    vector<int> sequ;
    int bit;
    while(num != 0)
    {
        bit = num % 2;
        sequ.push_back(bit);
        num = num / 2;
    }
    reverse(sequ.begin(), sequ.end());
    for(char ch : sequ)
    {
        cout << ch;
    } 
}
