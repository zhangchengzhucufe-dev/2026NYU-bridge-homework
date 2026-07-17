#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol)
{
    for(int i = 0; i < n; i++)
    {
        for(int p = 0; p < m; p++)
        {
            cout << "1";
        }

        for(int o = 0; o < n - i - 1; o++)
        {
            cout << "1" ;
        }

        for(int o = 0; o < 2 * i + 1; o++)
        {
            cout << symbol ;
        }
        cout << '\n';
    }
    
}

void printPineTree(int n, char symbol)
{
    for(int i = 0; i < n; i++)
    {
        for(int o = 0; o <= i + 1; o++)
        {
            for(int p = 0; p < n - o; p++)
            {
                cout << "1";
            }

            for(int p = 0; p < 2*o + 1; p++)
            {
                cout << symbol ;
            }
            cout << '\n';
        }
    }
}

int main()
{
    printShiftedTriangle(3, 4, '+');
    //printPineTree(3, '+');
    return 0;
}