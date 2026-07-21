#include <iostream>
using namespace std;

void printEvensWhile(int n)
{
    int i = 2;
    while(i <= n * 2)
    {
        cout << i << endl;
        i += 2;
    }
}

