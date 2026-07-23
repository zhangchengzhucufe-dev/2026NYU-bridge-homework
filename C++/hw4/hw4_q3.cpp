#include <iostream>
using namespace std;

void printBinary(int num)
{
    if(num == 1)
    {}
    else
    {
        printBinary(num / 2);
        cout << num % 2;
    }
}