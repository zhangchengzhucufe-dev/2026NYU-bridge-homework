#include <iostream>
using namespace std;

void printHourglass(int n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int o = 0; o < i; ++o)
        {
            cout << ' ';
        }
        for(int o = 0; o < 2*n - 1 - 2*i; ++o)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for(int i = 0; i < n; ++i)
    {
        for(int o = 0; o < n - 1 - i; ++o)
        {
            cout << ' ';
        }
        for(int o = 0; o < 2*i + 1; ++o)
        {
            cout << "*";
        }
        cout << "\n";
    }
}


int main()
{   
    printHourglass(4);
    return 0;
}